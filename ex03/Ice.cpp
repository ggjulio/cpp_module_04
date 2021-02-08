/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juligonz <juligonz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/07 15:10:32 by juligonz          #+#    #+#             */
/*   Updated: 2021/02/08 15:44:23 by juligonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(): AMateria("Ice"){}

Ice::Ice(const Ice &other) {
	*this = other;
}
Ice & Ice::operator=(const Ice &other){
	AMateria::operator=(other);
	_xp = other.getXP();
	return *this;
}
Ice::~Ice(){}

AMateria* Ice::clone() const{
	return new Ice(*this);
}
void Ice::use(ICharacter& target){}