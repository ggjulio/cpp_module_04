/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juligonz <juligonz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/07 16:09:27 by juligonz          #+#    #+#             */
/*   Updated: 2021/02/10 08:00:37 by juligonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(): _sources() {}
MateriaSource::MateriaSource(const MateriaSource &other): _sources() {
	*this = other;
}

MateriaSource & MateriaSource::operator=(const MateriaSource &other){
	for (size_t i = 0; i < sizeof(_sources) / sizeof(AMateria *); i++)
		if (other._sources[i] != NULL)
			_sources[i] = other._sources[i]->clone();
	return *this;
}
MateriaSource::~MateriaSource(){
	for (size_t i = 0; i < sizeof(_sources) / sizeof(AMateria *); i++)
		if (_sources[i] != NULL)
			delete _sources[i];
}
	
void MateriaSource::learnMateria(AMateria *to_learn){
	for (size_t i = 0; i < sizeof(_sources) / sizeof(AMateria *); i++)
		if (_sources[i] == NULL)
		{
			_sources[i] = to_learn;
			break;
		}
}
AMateria* MateriaSource::createMateria(std::string const &type){
	for (size_t i = 0; i < sizeof(_sources) / sizeof(AMateria *); i++)
		if (_sources[i]->getType() == type)
			return _sources[i]->clone();
	return NULL;
}