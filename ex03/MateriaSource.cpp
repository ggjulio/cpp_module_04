/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juligonz <juligonz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/07 16:09:27 by juligonz          #+#    #+#             */
/*   Updated: 2021/02/08 21:59:08 by juligonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {}
MateriaSource::MateriaSource(const MateriaSource &){}
MateriaSource & MateriaSource::operator=(const MateriaSource &){

	return *this;
}
MateriaSource::~MateriaSource(){}
	
void MateriaSource::learnMateria(AMateria *to_learn){
	(void)to_learn;
}
AMateria* MateriaSource::createMateria(std::string const &type){
	(void)type;
	return NULL;
}