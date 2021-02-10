/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juligonz <juligonz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/07 14:58:08 by juligonz          #+#    #+#             */
/*   Updated: 2021/02/10 08:01:23 by juligonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ICharacter.hpp"
#include "IMateriaSource.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "AMateria.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"

int main()
{
	IMateriaSource *src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter *moi = new Character("moi");
	AMateria *tmp = NULL;
	tmp = src->createMateria("ice");
	moi->equip(tmp);
	tmp = src->createMateria("cure");
	moi->equip(tmp);
	ICharacter *bob = new Character("bob");
	moi->use(0, *bob);
	moi->use(1, *bob);

	std::cout << "###########################" << std::endl;
	std::cout << "#######  More tests  ######" << std::endl;
	std::cout << "###########################" << std::endl;
	std::cout << "####  Test +10xp increment:" << std::endl;
	std::cout << "<Materia test> type:" << tmp->getType() << " | actual xp:" << tmp->getXP() << std::endl;
	moi->use(1, *bob);
	moi->use(1, *bob);
	std::cout << "<Materia test> type:" << tmp->getType() << " | actual xp:" << tmp->getXP() << std::endl;
	std::cout << "####  Test max inventory materia (then test leaks)" << std::endl;
	moi->equip(src->createMateria("cure"));
	moi->equip(src->createMateria("cure"));
	tmp = src->createMateria("cure");
	moi->equip(tmp);
	std::cout << "####  Test DeepCopy MateriaSource (test leaks)" << std::endl;
	IMateriaSource *src2 = new MateriaSource(*static_cast<MateriaSource*>(src));
	

	
	ICharacter *boby= new Character(*static_cast<Character*>(bob));
	ICharacter *toby= new Character(*static_cast<Character*>(bob));

	delete bob;
	delete boby;
	delete toby;
	delete moi;
	delete src;
	delete src2;
	
	delete tmp;
	return 0;
}