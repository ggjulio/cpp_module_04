/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juligonz <juligonz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/07 04:48:13 by juligonz          #+#    #+#             */
/*   Updated: 2021/02/07 06:16:15 by juligonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ostream>
#include "Character.hpp"

Character::Character(std::string const &name): _name(name), _apNumber(40), _weapon(NULL){}

Character::Character(const Character &other){
	*this = other;
}

Character& Character::operator=(const Character &other){
	_name = other._name;
	_apNumber = other._apNumber;
	_weapon = other._weapon;
	return *this;
}

Character::~Character(){}

std::string const & Character::getName() const{ return _name;}
int					Character::getApNumber() const{ return _apNumber;}
AWeapon const *		Character::getWeapon() const{ return _weapon;}

void Character::recoverAP(){
	const int maxAp = 40;
	_apNumber+=10;
	if (_apNumber > maxAp)
		_apNumber = maxAp;
}

void Character::equip(AWeapon *weapon){
	_weapon = weapon;
}

void Character::attack(Enemy *enemy){
	if (!_weapon)
		return ;
	if (_apNumber - _weapon->getAPCost() < 0)
		return ;
	std::cout << _name << " attack " << enemy->getType()
		<< " with a " << _weapon->getName() << "" << std::endl;
	_weapon->attack();
	enemy->takeDamage(getWeapon()->getDamage());
	_apNumber -=  _weapon->getAPCost();
}

std::ostream & operator <<(std::ostream& os, const Character &c){
	os << c.getName() << " has " << c.getApNumber() << " AP and ";
	if (c.getWeapon())
		os << "wields a " << c.getWeapon()->getName();
	else
		os << "is unarmed ";
	return os << std::endl;
}

