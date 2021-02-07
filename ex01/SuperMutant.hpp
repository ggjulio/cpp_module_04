/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juligonz <juligonz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/07 03:59:13 by juligonz          #+#    #+#             */
/*   Updated: 2021/02/07 05:18:36 by juligonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPER_MUTANT_H
#define SUPER_MUTANT_H

#include <string>
#include <iostream>
#include "Enemy.hpp"

class SuperMutant : public Enemy
{
private:
	int _damageReduction;

public :
	SuperMutant();
	SuperMutant(const SuperMutant &);
	SuperMutant & operator=(const SuperMutant &);
	virtual ~SuperMutant();

	virtual void takeDamage(int);
};

#endif