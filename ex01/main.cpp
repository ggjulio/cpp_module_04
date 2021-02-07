/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juligonz <juligonz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/06 06:51:30 by juligonz          #+#    #+#             */
/*   Updated: 2021/02/07 06:24:02 by juligonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PowerFist.hpp"
#include "PlasmaRifle.hpp"
#include "Enemy.hpp"
#include "Character.hpp"
#include "SuperMutant.hpp"
#include "RadScorpion.hpp"

int main()
{
	Character *me = new Character("me");
	std::cout << *me;
	Enemy *b = new RadScorpion();
	AWeapon *pr = new PlasmaRifle();
	AWeapon *pf = new PowerFist();
	me->equip(pr);
	std::cout << *me;
	me->equip(pf);
	me->attack(b);
	std::cout << *me;
	me->equip(pr);
	std::cout << *me;
	me->attack(b);
	std::cout << *me;
	me->attack(b);
	std::cout << *me;
	std::cout << "##################################" << std::endl;
	me->recoverAP();
	std::cout << *me;
	
	return 0;
}