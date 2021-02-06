/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juligonz <juligonz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/06 04:51:16 by juligonz          #+#    #+#             */
/*   Updated: 2021/02/06 06:22:07 by juligonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"
#include <iostream>

Sorcerer::Sorcerer(const std::string &name, const std::string & title):
	 _name(name), _title(title)
{
	std::cout << _name << ", " << _title << ", is born!" << std::endl;
}

Sorcerer::Sorcerer(const Sorcerer &other){
	*this = other;
}

Sorcerer &Sorcerer::operator=(const Sorcerer &other){
	_name = other._name;
	_title = other._title;
	return *this;
}

Sorcerer::~Sorcerer(){
	std::cout << _name << ", " << _title 
		<< ", is dead. Consequences will never be the same!" << std::endl;
}

std::string Sorcerer::getName() const{ return _name;}
std::string Sorcerer::getTitle() const{ return _title;}

void Sorcerer::polymorph(Victim const &v)  const{
	v.polymorphed();
}

std::ostream& operator <<(std::ostream& os, const Sorcerer &f)
{
	os << "I am " << f.getName() << ", " << f.getTitle() << " and I like ponies!" << std::endl;
	return os;
}
