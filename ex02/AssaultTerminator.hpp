/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juligonz <juligonz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/07 07:14:53 by juligonz          #+#    #+#             */
/*   Updated: 2021/02/07 10:49:41 by juligonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ASSAULT_TERMINATOR_H
#define ASSAULT_TERMINATOR_H

#include "ISpaceMarine.hpp"
class AssaultTerminator: public ISpaceMarine 
{
private:
	
public:
	AssaultTerminator();
	AssaultTerminator(const AssaultTerminator &);
	AssaultTerminator & operator=(const AssaultTerminator &);
	~AssaultTerminator();

	virtual ISpaceMarine *clone() const;
	virtual void battleCry() const;
	virtual void rangedAttack() const;
	virtual void meleeAttack() const;
};

#endif