/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juligonz <juligonz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/07 04:07:10 by juligonz          #+#    #+#             */
/*   Updated: 2021/02/10 08:31:58 by juligonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperMutant.hpp"
#include <iostream>

SuperMutant::SuperMutant(): Enemy(170, "Super Mutant"), _damageReduction(0)
{
	std::cout << "Gaaah. Me want smash heads!" << std::endl;
}
SuperMutant::SuperMutant(const SuperMutant &other):
	Enemy(other.getHP(), other.getType()), _damageReduction(0) {}

SuperMutant &SuperMutant::operator=(const SuperMutant &other){
	Enemy::operator=(other);
	_damageReduction = other._damageReduction;
	return *this;
}

SuperMutant::~SuperMutant(){
	std::cout << "Aaargh..." << std::endl;
}

void SuperMutant::takeDamage(int damage){
	_damageReduction+=3;
	Enemy::takeDamage(damage - _damageReduction-3);
}
