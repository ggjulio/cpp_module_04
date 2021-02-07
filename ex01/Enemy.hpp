/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juligonz <juligonz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/06 07:43:53 by juligonz          #+#    #+#             */
/*   Updated: 2021/02/07 05:19:42 by juligonz         ###   ########.fr       */
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
	
	Enemy();
public :
	Enemy(int hp, std::string const &typ);
	Enemy(const Enemy &);
	Enemy & operator=(const Enemy &enemy);
	virtual ~Enemy();

	std::string const & getType() const;
	int getHP() const;

	virtual void takeDamage(int);
};

#endif