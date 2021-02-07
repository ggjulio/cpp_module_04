/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juligonz <juligonz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/07 07:08:56 by juligonz          #+#    #+#             */
/*   Updated: 2021/02/07 07:10:21 by juligonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TACTICAL_MARINE_H
#define TACTICAL_MARINE_H

#include "ISpaceMarine.hpp"
class TacticalMarine: public ISpaceMarine 
{
private:
	
public:
	TacticalMarine();
	~TacticalMarine();

	virtual ISpaceMarine *clone() const;
	virtual void battleCry() const;
	virtual void rangedAttack() const;
	virtual void meleeAttack() const;
};

#endif