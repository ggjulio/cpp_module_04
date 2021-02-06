/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juligonz <juligonz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/06 07:43:54 by juligonz          #+#    #+#             */
/*   Updated: 2021/02/06 08:19:02 by juligonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"

Enemy::Enemy(int hp, std::string const &type): _hp(hp), _type(type){}

std::string const & Enemy::getType() const{return _type;}
int Enemy::getHP() const{return _hp;}

void takeDamage(int damage){
	_hp = damage;
	if (_hp < 0)
		_hp = 0
}