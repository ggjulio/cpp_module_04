/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juligonz <juligonz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/07 15:10:32 by juligonz          #+#    #+#             */
/*   Updated: 2021/02/08 21:47:59 by juligonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Ice.hpp"

Ice::Ice(): AMateria("ice"){}

Ice::Ice(const Ice &other): AMateria("ice") {
	*this = other;
}
Ice & Ice::operator=(const Ice &other) {
	AMateria::operator=(other);
	return *this;
}

Ice::~Ice(){}

AMateria* Ice::clone() const{
	return new Ice(*this);
}
void Ice::use(ICharacter& target){
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;	
}