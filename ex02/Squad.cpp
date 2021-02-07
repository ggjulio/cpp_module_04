/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juligonz <juligonz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/07 07:16:21 by juligonz          #+#    #+#             */
/*   Updated: 2021/02/07 08:32:25 by juligonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"
#include <stddef.h>

Squad::Squad(): _squad(NULL) {}

Squad::~Squad(){}

int Squad::getCount() const
{
	t_list *iterator = _squad;
	size_t len = 0;

	while (iterator)
	{
		len++;
		iterator = iterator->next;
	}
}

ISpaceMarine*	Squad::getUnit(int n) const
{
	t_list *iterator = _squad;
	size_t len = 0;

	while (iterator && n)
	{
		iterator = iterator->next;
		n--;
	}
	if (!iterator)
		return NULL;
	return iterator->spaceMarine;
}

int	Squad::push(ISpaceMarine *unit_to_add)
{
	t_list *iterator = _squad;
	size_t len = 1;
	
	if (!iterator)
	{	
		_squad = new t_list();		
		_squad->spaceMarine = unit_to_add;
		_squad->next = NULL;
		return len;
	}
	while (iterator->next)
	{
		iterator = iterator->next;
		len++;
	}
	if ()
	_squad = new t_list();		
	_squad->spaceMarine = unit_to_add;
	_squad->next = NULL;
	return len;
}