/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juligonz <juligonz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/07 07:08:33 by juligonz          #+#    #+#             */
/*   Updated: 2021/02/07 10:32:25 by juligonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "TacticalMarine.hpp"
#include <iostream>

TacticalMarine::TacticalMarine(){
	std::cout << "Tactical Marine ready for battle!" << std::endl;
}

TacticalMarine::TacticalMarine(const TacticalMarine &other){
	std::cout << "Tactical Marine ready for battle!" << std::endl;
	*this = other;
}
TacticalMarine & TacticalMarine::operator=(const TacticalMarine &other){
	(void)other;
	return *this;
}
TacticalMarine::~TacticalMarine(){
	std::cout << "Aaargh..." << std::endl;
}

ISpaceMarine *TacticalMarine::clone() const{
	return new TacticalMarine(*this);
}

void TacticalMarine::battleCry() const{
	std::cout << "For the holy PLOT!" << std::endl;
}

void TacticalMarine::rangedAttack() const{
	std::cout << "* attacks with a bolter *" << std::endl;	
}

void TacticalMarine::meleeAttack() const{
	std::cout << "* attacks with a chainsword *" << std::endl;
}