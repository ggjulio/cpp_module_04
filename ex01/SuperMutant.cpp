/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juligonz <juligonz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/07 04:07:10 by juligonz          #+#    #+#             */
/*   Updated: 2021/02/07 04:35:59 by juligonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperMutant.hpp"
#include <iostream>

SuperMutant::SuperMutant(): Enemy(170, "Super Mutant"), _damageReduction(0)
{
	std::cout << "Gaaah. Break everything !" << std::endl;
}
SuperMutant::SuperMutant(const SuperMutant &other):
	Enemy(other.getHP(), other.getType()), _damageReduction(0) {}

SuperMutant &SuperMutant::operator=(const SuperMutant &other){
	Enemy::operator=(other);
	_damageReduction = other._damageReduction;
	return *this;
}

SuperMutant::~SuperMutant(){
	std::cout << "Aaargh ..." << std::endl;
}

void SuperMutant::takeDamage(int damage){
	Enemy::takeDamage(damage - _damageReduction);
	_damageReduction+=3;
}
