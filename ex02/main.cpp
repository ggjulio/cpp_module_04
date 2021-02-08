/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juligonz <juligonz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/07 07:00:12 by juligonz          #+#    #+#             */
/*   Updated: 2021/02/07 14:08:54 by juligonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ISpaceMarine.hpp"
#include "ISquad.hpp"
#include "Squad.hpp"
#include "TacticalMarine.hpp"
#include "AssaultTerminator.hpp"

int main()
{
	ISpaceMarine *bob = new TacticalMarine;
	ISpaceMarine *jim = new AssaultTerminator;
	ISquad *vlc = new Squad;
	vlc->push(bob);
	vlc->push(jim);
	for (int i = 0; i < vlc->getCount(); ++i)
	{
		ISpaceMarine *cur = vlc->getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}
	delete vlc;
	std::cout << "#####################################" << std::endl;
	vlc = new Squad;
	bob = new TacticalMarine;
	jim = new TacticalMarine;
	ISpaceMarine *pol = new TacticalMarine;
	std::cout << "#####################################" << std::endl;
	std::cout << "getCount:" << vlc->getCount() << std::endl;
	
	std::cout << "### Test push NULL:" << std::endl;
	vlc->push(NULL);
	std::cout << "getCount:" << vlc->getCount() << std::endl;
	
	std::cout << "### Test push same:" << std::endl;
	vlc->push(bob);
	vlc->push(bob);
	vlc->push(bob);
	std::cout << "getCount:" << vlc->getCount() << std::endl;
	
	std::cout << "### Test push same 2:" << std::endl;
	vlc->push(jim);
	vlc->push(jim);
	vlc->push(jim);
	std::cout << "getCount:" << vlc->getCount() << std::endl;
	
	std::cout << "### Test push same 3:" << std::endl;
	vlc->push(pol);
	vlc->push(pol);
	vlc->push(pol);
	std::cout << "getCount:" << vlc->getCount() << std::endl;
	std::cout << "### Test copy/assignation:" << std::endl;
	ISquad *vlc2 = new Squad(*static_cast<Squad*>(vlc));

	*static_cast<Squad*>(vlc2) = *static_cast<Squad*>(vlc);
	*static_cast<Squad*>(vlc2) = *static_cast<Squad*>(vlc);
	*static_cast<Squad*>(vlc2) = *static_cast<Squad*>(vlc);


	std::cout << "### Test delete on squad with 3 marines (check valgrind):" << std::endl;
	delete vlc;
	delete vlc2;
	return 0;
}