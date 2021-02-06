/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juligonz <juligonz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/06 04:51:12 by juligonz          #+#    #+#             */
/*   Updated: 2021/02/07 00:15:05 by juligonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"
#include <iostream>

Peon::Peon(const std::string &name): Victim(name)
{
	std::cout << "Zog zog." << std::endl;
}

Peon::Peon(const Peon &other): Victim(other._name)
{
	*this = other;
}

Peon &Peon::operator=(const Peon &other){
	_name = other._name;
	return *this;
}

Peon::~Peon(){
	std::cout << "Bleuark..." << std::endl;
}

void Peon::polymorphed() const{
	std::cout << _name << " has been turned into a pink pony!" << std::endl;
}

std::ostream& operator <<(std::ostream& os, const Peon &f)
{
	os << "I'm " << f.getName() <<" and I like otters!" << std::endl;
	return os;
}
