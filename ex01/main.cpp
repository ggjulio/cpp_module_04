/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juligonz <juligonz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/06 06:51:30 by juligonz          #+#    #+#             */
/*   Updated: 2021/02/06 08:10:39 by juligonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PowerFist.hpp"
#include "PlasmaRifle.hpp"
#include "Enemy.hpp"
#include "Character.hpp"
#include "SuperMutant.hpp"

int main()
{
	Character *moi = new Character("moi");
	std::cout << *moi;
	Enemy *b = new RadScorpion();
	AWeapon *pr = new PlasmaRifle();
	AWeapon *pf = new PowerFist();
	moi->equip(pr);
	// std::cout << *moi;
	// moi->equip(pf);
	// moi->attack(b);
	// std::cout << *moi;
	// moi->equip(pr);
	// std::cout << *moi;
	// moi->attack(b);
	// std::cout << *moi;
	// moi->attack(b);
	// std::cout << *moi;
	return 0;
}