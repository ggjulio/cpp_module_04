/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juligonz <juligonz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/07 16:09:27 by juligonz          #+#    #+#             */
/*   Updated: 2021/02/07 16:16:02 by juligonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(): _sources(){}
MateriaSource::MateriaSource(const MateriaSource &){}
MateriaSource & MateriaSource::operator=(const MateriaSource &){}
MateriaSource::~MateriaSource(){}
	
void MateriaSource::learnMateria(AMateria *){}
AMateria* MateriaSource::createMateria(std::string const &type){}