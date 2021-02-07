/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juligonz <juligonz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/07 04:38:59 by juligonz          #+#    #+#             */
/*   Updated: 2021/02/07 05:07:35 by juligonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_H
#define CHARACTER_H

#include <string>
#include "AWeapon.hpp"
#include "Enemy.hpp"

class Character
{
private:
	std::string _name;
	int _apNumber;
	AWeapon *_weapon;

	Character();
public :
	Character(std::string const &name);
	Character(const Character &);
	Character& operator=(const Character &);
	virtual ~Character();

	std::string const & getName() const;
	int					getApNumber() const;
	AWeapon const *		getWeapon() const;

	void recoverAP();
	void equip(AWeapon *);
	void attack(Enemy *);
};

std::ostream & operator <<(std::ostream& os, const Character &c);

#endif