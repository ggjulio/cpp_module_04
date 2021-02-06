/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juligonz <juligonz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/06 07:43:53 by juligonz          #+#    #+#             */
/*   Updated: 2021/02/06 08:14:26 by juligonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_H
#define ENEMY_H

#include <string>
#include <iostream>

class Enemy
{
private:
	int _hp;
	std::string _type;
public :
	Enemy(int hp, std::string const &type);
	Enemy(const Enemy &);
	Enemy & operator=(const Enemy &enemy);
	virtual ~Enemy();
	std::string & getType() const;
	int getHP() const;

	virtual void takeDamage(int);
};

#endif