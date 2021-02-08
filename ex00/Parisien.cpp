/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Parisien.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juligonz <juligonz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/06 04:51:12 by juligonz          #+#    #+#             */
/*   Updated: 2021/02/08 08:55:22 by juligonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Parisien.hpp"
#include <iostream>

Parisien::Parisien(const std::string &name): Victim(name)
{
	std::cout << "CONSTRUCTOR: Nous, a Paris intra muros, on a acces a la culture... like...anyway" << std::endl;
}

Parisien::Parisien(const Parisien &other): Victim(other._name)
{
	*this = other;
}

Parisien &Parisien::operator=(const Parisien &other){
	_name = other._name;
	return *this;
}

Parisien::~Parisien(){
	std::cout << "DESTRUCTOR: I'm going to paris 2 (Bordeaux). Bordeau is the new Paris. Bordeau is un Paris a taille humaine." << std::endl;
}

void Parisien::polymorphed() const{
	std::cout << _name << " has been turned into a Parisien confine!" << std::endl;
}

std::ostream& operator <<(std::ostream& os, const Parisien &f)
{
	os << "I'm " << f.getName() <<" and I like to pay 20e for a morito on a rooftop! Bhru it's cold out there." << std::endl;
	return os;
}
