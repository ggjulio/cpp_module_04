/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juligonz <juligonz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/06 07:21:45 by juligonz          #+#    #+#             */
/*   Updated: 2021/02/06 07:55:04 by juligonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle(): AWeapon("Plasma Rifle", 5, 21){}
PlasmaRifle::PlasmaRifle(const PlasmaRifle &other): AWeapon(other.getName(),
	other.getAPCost(), other.getDamage()){}

PlasmaRifle & PlasmaRifle::operator=(const PlasmaRifle &other){
	_name = other.getAPCost();
	_apcost = other.getAPCost();
	_damage = other.getAPCost();
	return *this;
}

PlasmaRifle::~PlasmaRifle(){}

void PlasmaRifle::attack() const{
	std::cout << "* piouuu piouuu piouuu *" << std::endl;
}