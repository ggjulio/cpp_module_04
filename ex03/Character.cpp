/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juligonz <juligonz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/08 14:53:12 by juligonz          #+#    #+#             */
/*   Updated: 2021/02/10 07:06:53 by juligonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stddef.h>
#include "Character.hpp"

Character::Character(std::string name): _name(name), _materias(){}

Character::Character(const Character &other){
	*this = other;
}

Character & Character::operator=(const Character &other){
	_name = other._name;
	for (size_t i = 0; i < sizeof(_materias)/sizeof(AMateria *); i++)
		if (_materias[i] != NULL)
		{
			delete _materias[i];
			_materias[i] = NULL;
		}

	for (size_t i = 0; i < sizeof(_materias) >> 3; i++)
		if (_materias[i] != NULL)
			_materias[i] = other._materias[i]->clone();

	return *this;
}
Character::~Character(){
	for (size_t i = 0; i < sizeof(_materias)/sizeof(AMateria *); i++)
		if (_materias[i] != NULL)
			delete _materias[i];
}

std::string const & Character::getName() const {
	return _name;
}

void Character::equip(AMateria *m) {
	for (size_t i = 0; i < sizeof(_materias) >> 3; i++)
		if (_materias[i] == NULL)
		{
			_materias[i] = m;
			break;
		}
}

void Character::unequip(int idx) {
	if (idx < 0 || idx > 3)
		return ;
	_materias[idx] = NULL;
}

void Character::use(int idx, ICharacter &target){
	if (idx < 0 || idx > 3 || _materias[idx] == NULL)
		return ;
	_materias[idx]->use(target);
}