/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juligonz <juligonz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/06 06:44:33 by juligonz          #+#    #+#             */
/*   Updated: 2021/02/06 07:39:46 by juligonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON_H
#define AWEAPON_H

#include <string>

class AWeapon
{
private:
	std::string _name;
	int _apcost;
	int _damage;

	AWeapon();
public:
	AWeapon(std::string const &name, int apcost, int damage);
	AWeapon(const AWeapon &);
	AWeapon & operator=(const AWeapon &);	
	virtual ~AWeapon();
	
	std::string const & getName() const;
	int getAPCost() const;
	int getDamage() const;

	virtual void attack() const = 0;
};

#endif