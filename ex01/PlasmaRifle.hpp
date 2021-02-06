/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juligonz <juligonz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/06 06:58:55 by juligonz          #+#    #+#             */
/*   Updated: 2021/02/06 07:48:45 by juligonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLASMA_RIFLE_H
#define PLASMA_RIFLE_H

#include "AWeapon.hpp"

class PlasmaRifle : public AWeapon
{
private:
	
public:
	PlasmaRifle();
	PlasmaRifle(const PlasmaRifle &);
	PlasmaRifle & operator=(const PlasmaRifle &);	
	virtual ~PlasmaRifle();

	virtual void attack() const;
};

#endif