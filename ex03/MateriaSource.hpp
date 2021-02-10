/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juligonz <juligonz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/07 16:06:12 by juligonz          #+#    #+#             */
/*   Updated: 2021/02/10 07:23:55 by juligonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIA_SOURCE_H
#define MATERIA_SOURCE_H

#include <string>
#include "IMateriaSource.hpp"
#include "AMateria.hpp"

class MateriaSource : public IMateriaSource
{
private:
	AMateria *_sources[4];
	
	MateriaSource(const MateriaSource &);
	MateriaSource & operator=(const MateriaSource &);
public:
	MateriaSource();
	~MateriaSource();
	
	virtual void learnMateria(AMateria *);
	virtual AMateria* createMateria(std::string const &type);
};

#endif