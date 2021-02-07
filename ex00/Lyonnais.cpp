/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Lyonnais.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juligonz <juligonz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/06 04:51:12 by juligonz          #+#    #+#             */
/*   Updated: 2021/02/07 03:27:09 by juligonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Lyonnais.hpp"
#include <iostream>

Lyonnais::Lyonnais(const std::string &name): Victim(name)
{
	std::cout << "CONSTRUCTOR: Lyon c'est cher bien, Grenoble ca pue la pisse. Ah je rouille..." << std::endl;
}

Lyonnais::Lyonnais(const Lyonnais &other): Victim(other._name)
{
	*this = other;
}

Lyonnais &Lyonnais::operator=(const Lyonnais &other){
	_name = other._name;
	return *this;
}

Lyonnais::~Lyonnais(){
	std::cout << "DESTRUCTOR: Chu ganais, en vrai c'est cher bien Grenoble. \
Chu refait, y'a une gache ou ils vendent des bons tacos." << std::endl;
}

void Lyonnais::polymorphed() const{
	std::cout << _name << " has been turned into a Lyonnais confine!" << std::endl;
}

std::ostream& operator <<(std::ostream& os, const Lyonnais &f)
{
	os << "I'm " << f.getName() <<" and j'dicav` L'OM, et j'dicav` piav au Terreaux. \
He! poukav pas mais, chu fane j'ai nike la vago des darons. \
jvai balnav` qu'un trepanne m'a grille la prio..." << std::endl;
	return os;
}
