/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juligonz <juligonz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/07 15:10:29 by juligonz          #+#    #+#             */
/*   Updated: 2021/02/08 18:50:04 by juligonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Cure.hpp"

Cure::Cure(): AMateria("cure"){}

Cure::Cure(const Cure &other): AMateria("cure") {
	*this = other;
}
Cure & Cure::operator=(const Cure &other){
	AMateria::operator=(other);
	return *this;
}

Cure::~Cure(){}

AMateria* Cure::clone() const {
	return new Cure(*this);
}
void Cure::use(ICharacter& target) {
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}