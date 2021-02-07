/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juligonz <juligonz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/07 04:36:49 by juligonz          #+#    #+#             */
/*   Updated: 2021/02/07 06:29:58 by juligonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RadScorpion.hpp"
#include <iostream>

RadScorpion::RadScorpion(): Enemy(80, "RadScorpion")
{
	std::cout << "* click click click *" << std::endl;
}
RadScorpion::RadScorpion(const RadScorpion &other):
	Enemy(other.getHP(), other.getType()) {}

RadScorpion &RadScorpion::operator=(const RadScorpion &other){
	Enemy::operator=(other);
	return *this;
}

RadScorpion::~RadScorpion(){
	std::cout << "* SPROTCH *" << std::endl;
}
