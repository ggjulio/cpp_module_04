/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juligonz <juligonz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/06 04:51:21 by juligonz          #+#    #+#             */
/*   Updated: 2021/02/06 06:23:36 by juligonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"
#include <iostream>

Victim::Victim(const std::string &name):
	 _name(name)
{
	std::cout << "Some random victim called "<<_name<< " just appeared!" << std::endl;
}

Victim::Victim(const Victim &other){
	*this = other;
}

Victim &Victim::operator=(const Victim &other){
	_name = other._name;
	return *this;
}

Victim::~Victim(){
	std::cout << "The victim "<< _name << " died for no apparent reasons!" << std::endl;
}

std::string Victim::getName() const{ return _name;}

void Victim::polymorphed() const{
	std::cout << _name << " has been turned into a cute little sheep!" << std::endl;
}

std::ostream& operator <<(std::ostream& os, const Victim &f)
{
	os << "I'm " << f.getName() <<" and I like otters!" << std::endl;
	return os;
}
