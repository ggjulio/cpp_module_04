/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juligonz <juligonz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/07 16:06:12 by juligonz          #+#    #+#             */
/*   Updated: 2021/02/07 16:12:41 by juligonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIA_SOURCE_H
#define MATERIA_SOURCE_H

#include <string>
#include "IMateriaSource.hpp"
#include "AMateria.hpp"

class MateriaSource
{
private:
	IMateriaSource _sources[4];
public:
	MateriaSource();
	MateriaSource(const MateriaSource &);
	MateriaSource & operator=(const MateriaSource &);
	~MateriaSource();
	
	virtual void learnMateria(AMateria *);
	virtual AMateria* createMateria(std::string const &type);
};

#endif