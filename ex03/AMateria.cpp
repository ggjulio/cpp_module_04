/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juligonz <juligonz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/07 14:31:19 by juligonz          #+#    #+#             */
/*   Updated: 2021/02/10 07:54:36 by juligonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(std::string const &type): _type(type), _xp(0){}

AMateria::AMateria(const AMateria &other){
	*this = other;
}
AMateria & AMateria::operator=(const AMateria &other){
	_xp = other._xp;
	return *this;
}
AMateria::~AMateria(){}

std::string const &AMateria::getType() const{ return _type;}
unsigned int AMateria::getXP() const{ return _xp;}

void AMateria::use(ICharacter& target){
	(void)target;
	_xp += 10;
}