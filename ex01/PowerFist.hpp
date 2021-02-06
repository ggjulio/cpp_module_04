/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juligonz <juligonz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/06 07:42:57 by juligonz          #+#    #+#             */
/*   Updated: 2021/02/06 08:08:31 by juligonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POWER_FIST_H
#define POWER_FIST_H

#include "AWeapon.hpp"

class PowerFist : public AWeapon
{
private:
	
public:
	PowerFist();
	PowerFist(const PowerFist &);
	PowerFist & operator=(const PowerFist &);
	virtual ~PowerFist();

	virtual void attack() const;
};

#endif