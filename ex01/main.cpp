/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juligonz <juligonz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/06 06:51:30 by juligonz          #+#    #+#             */
/*   Updated: 2021/02/08 09:20:08 by juligonz         ###   ########.fr       */
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
	
	std::cout << "############### Test RecoverAP MAX ###################" << std::endl;
	me->recoverAP(); std::cout << *me;
	me->recoverAP(); std::cout << *me;
	
	std::cout << "############### Test Super Mutant Damage reduction  ################" << std::endl;
	me->equip(pf);
	b = new SuperMutant();
	std::cout << *me;
	
	me->attack(b); std::cout << "|||    enemyHp:" << b->getHP() << " ||| "  << *me;
	me->attack(b); std::cout << "|||    enemyHp:" << b->getHP() << " ||| "  << *me;
	me->attack(b); std::cout << "|||    enemyHp:" << b->getHP() << " ||| "  << *me;
	me->attack(b);
	
	std::cout << "############### Test AP MIN   ##################" << std::endl;
	b = new SuperMutant();
	
	me->attack(b); std::cout << "|||    enemyHp:" << b->getHP() << " ||| "  << *me;
	me->attack(b); std::cout << "|||    enemyHp:" << b->getHP() << " ||| "  << *me;
	me->attack(b); std::cout << "|||    enemyHp:" << b->getHP() << " ||| "  << *me;

	me->recoverAP();

	me->attack(b); std::cout << "|||    enemyHp:" << b->getHP() << " ||| "  << *me;
	me->attack(b); std::cout << "|||    enemyHp:" << b->getHP() << " ||| "  << *me;
	me->attack(b); std::cout << "|||    enemyHp:" << b->getHP() << " ||| "  << *me;
	
	std::cout << "############### Ok. KILL HIM !  ################" << std::endl;
	me->recoverAP();
	me->recoverAP();
	me->recoverAP();
	me->recoverAP();

	me->attack(b); std::cout << "|||    enemyHp:" << b->getHP() << " ||| "  << *me;
	me->attack(b);

	return 0;
}