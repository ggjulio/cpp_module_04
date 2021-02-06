/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juligonz <juligonz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/06 04:51:16 by juligonz          #+#    #+#             */
/*   Updated: 2021/02/06 05:33:52 by juligonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"
#include <iostream>

Sorcerer::Sorcerer(std::string name, std::string title): _name(name), _title(title){
	std::cout << _name << ", " << _title << ", is born!" << std::endl;
}
Sorcerer::~Sorcerer(){
	std::cout << _name << ", " << _title 
		<< ", is dead. Consequences will never be the same!" << std::endl;
}

std::string Sorcerer::getName() const{ return _name;}
std::string Sorcerer::getTitle() const{ return _title;}

std::ostream& operator <<(std::ostream& os, const Sorcerer &f)
{
	os << "I am " << f.getName() << ", " << f.getTitle() << " and i like ponies!" << std::endl;
	return os;
}
