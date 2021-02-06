/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juligonz <juligonz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/06 07:41:36 by juligonz          #+#    #+#             */
/*   Updated: 2021/02/06 07:57:44 by juligonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PowerFist.hpp"

PowerFist::PowerFist(): AWeapon("Power fist", 8, 50){}
PowerFist::PowerFist(const PowerFist &other): AWeapon(other.getName(),
	other.getAPCost(), other.getDamage()){}

PowerFist & PowerFist::operator=(const PowerFist &other){
	_name = other.getAPCost();
	_apcost = other.getAPCost();
	_damage = other.getAPCost();
	return *this;
}

PowerFist::~PowerFist(){}

void PowerFist::attack() const{
	std::cout << "* pschhh... SBAM ! *" << std::endl;
}