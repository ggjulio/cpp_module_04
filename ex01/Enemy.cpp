/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juligonz <juligonz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/06 07:43:54 by juligonz          #+#    #+#             */
/*   Updated: 2021/02/07 06:28:54 by juligonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"

Enemy::Enemy(int hp, std::string const &type): _hp(hp), _type(type){}

Enemy::Enemy(const Enemy &other){
	*this = other;
}

Enemy & Enemy::operator=(const Enemy &other){
	_hp = other.getHP();
	_type = other.getType();
	return *this;
}

Enemy::~Enemy(){}

std::string const & Enemy::getType() const{return _type;}
int Enemy::getHP() const{return _hp;}

void Enemy::takeDamage(int damage){
	_hp -= damage;
	if (_hp < 0)
	{
		_hp = 0;
		delete this;
	}
	
}
