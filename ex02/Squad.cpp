/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juligonz <juligonz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/07 07:16:21 by juligonz          #+#    #+#             */
/*   Updated: 2021/02/08 12:50:55 by juligonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"
#include <stddef.h>

Squad::Squad(): _squad(NULL) {}

Squad::Squad(const Squad &other): _squad(NULL) {
	*this = other;
}

Squad & Squad::operator=(const Squad &other){
	lstClear();
	for (int i = 0; i < other.getCount(); i++)
		push(other.getUnit(i)->clone());

	return *this;
}

void Squad::lstClear(){
	t_list *iterator = _squad;
	t_list *next;

	while (iterator)
	{
		next = iterator->next;
		delete iterator->spaceMarine;
		delete iterator;
		iterator = next;
	}
	_squad = NULL;
}

Squad::~Squad(){
	lstClear();
}

int Squad::getCount() const
{
	t_list *iterator = _squad;
	size_t len = 0;

	while (iterator)
	{
		len++;
		iterator = iterator->next;
	}
	return len;
}

ISpaceMarine*	Squad::getUnit(int n) const
{
	t_list *iterator = _squad;

	while (iterator && n)
	{
		iterator = iterator->next;
		n--;
	}
	if (iterator)
		return iterator->spaceMarine;
	return NULL;
}

int	Squad::push(ISpaceMarine *unit_to_add)
{
	t_list *iterator = _squad;
	size_t len = 1;
	
	if (unit_to_add == NULL)
		return getCount();
	if (iterator == NULL)
	{	
		_squad = new t_list();		
		_squad->spaceMarine = unit_to_add;
		_squad->next = NULL;
		return len;
	}
	while (iterator->next)
	{
		if (iterator->spaceMarine == unit_to_add)
			return getCount();
		iterator = iterator->next;
		len++;
	}
	if (iterator->spaceMarine == unit_to_add)
		return len;
	iterator->next = new t_list();		
	iterator->next->spaceMarine = unit_to_add;
	iterator->next->next = NULL;
	return len + 1;
}