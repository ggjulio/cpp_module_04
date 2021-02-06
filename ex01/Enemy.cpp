/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juligonz <juligonz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/06 07:43:54 by juligonz          #+#    #+#             */
/*   Updated: 2021/02/06 08:05:47 by juligonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"

Enemy::Enemy(int hp, std::string const &type){
	
}
std::string & Enemy::getType() const{return _type;}
int Enemy::getHP() const{return _type;}

void takeDamage(){
	int oldHp = _hp;

	
}