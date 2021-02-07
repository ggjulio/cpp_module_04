/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juligonz <juligonz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/07 03:59:13 by juligonz          #+#    #+#             */
/*   Updated: 2021/02/07 06:29:01 by juligonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RAD_SCORPION_H
#define RAD_SCORPION_H

#include <string>
#include <iostream>
#include "Enemy.hpp"

class RadScorpion : public Enemy
{
private:

public :
	RadScorpion();
	RadScorpion(const RadScorpion &);
	RadScorpion & operator=(const RadScorpion &);
	virtual ~RadScorpion();

};

#endif