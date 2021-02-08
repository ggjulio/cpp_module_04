/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juligonz <juligonz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/07 15:10:29 by juligonz          #+#    #+#             */
/*   Updated: 2021/02/08 15:43:12 by juligonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(): AMateria("cure"){}

Cure::Cure(const Cure &other) {
	// *this = other;
}
Cure & Cure::operator=(const Cure &other){
	AMateria::operator=(other);
	_xp = other.getXP();
	return *this;
}

Cure::~Cure(){}

AMateria* Cure::clone() const{
	return new Cure(*this);
}
void Cure::use(ICharacter& target){}