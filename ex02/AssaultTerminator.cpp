/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juligonz <juligonz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/07 10:46:21 by juligonz          #+#    #+#             */
/*   Updated: 2021/02/07 11:46:35 by juligonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AssaultTerminator.hpp"
#include <iostream>

AssaultTerminator::AssaultTerminator(){
	std::cout << "* teleports from space *" << std::endl;
}

AssaultTerminator::AssaultTerminator(const AssaultTerminator &other){
	std::cout << "* teleports from space *" << std::endl;
	*this = other;
}
AssaultTerminator & AssaultTerminator::operator=(const AssaultTerminator &other){
	(void)other;
	return *this;
}
AssaultTerminator::~AssaultTerminator(){
	std::cout << "I’ll be back ..." << std::endl;
}

ISpaceMarine *AssaultTerminator::clone() const{
	return new AssaultTerminator(*this);
}

void AssaultTerminator::battleCry() const{
	std::cout << "This code is unclean. PURIFY IT!" << std::endl;
}

void AssaultTerminator::rangedAttack() const{
	std::cout << "* does nothing *" << std::endl;	
}

void AssaultTerminator::meleeAttack() const{
	std::cout << "* attaque with chainfists *" << std::endl;
}