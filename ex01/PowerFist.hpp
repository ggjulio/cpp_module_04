/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juligonz <juligonz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/06 07:42:57 by juligonz          #+#    #+#             */
/*   Updated: 2021/02/06 07:46:29 by juligonz         ###   ########.fr       */
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
	virtual ~PowerFist();

	virtual void attack() const;
};

#endif