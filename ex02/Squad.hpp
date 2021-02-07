/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juligonz <juligonz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/07 07:04:32 by juligonz          #+#    #+#             */
/*   Updated: 2021/02/07 07:45:02 by juligonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SQUAD_H
#define SQUAD_H

#include "ISquad.hpp"

class Squad : public ISquad
{
private:
	typedef struct s_list
	{
		ISpaceMarine *spaceMarine;
		struct s_list *next;
	} t_list;

	t_list *_squad;
	
public:
	Squad();
	~Squad();

	virtual int getCount() const;
	virtual ISpaceMarine *getUnit(int) const;
	virtual int push(ISpaceMarine *);
};


#endif