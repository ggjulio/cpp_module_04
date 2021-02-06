/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juligonz <juligonz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/06 06:45:01 by juligonz          #+#    #+#             */
/*   Updated: 2021/02/06 07:13:30 by juligonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"

AWeapon::AWeapon(std::string const &name, int apcost, int damage):
	_name(name), _apcost(apcost), _damage(damage){}

AWeapon::AWeapon(const AWeapon &other):
	_name(other.getName()), _apcost(other.getAPCost()), _damage(other.getDamage()){}

AWeapon & AWeapon::operator=(const AWeapon &other){
	_name = other.getName();
	_apcost = other.getAPCost();
	_damage = other.getDamage();
	return *this;
}

AWeapon::~AWeapon(){}
	
std::string const & AWeapon::getName() const{ return _name;}
int AWeapon::getAPCost() const{ return _apcost;}
int AWeapon::getDamage() const{ return _damage;}
