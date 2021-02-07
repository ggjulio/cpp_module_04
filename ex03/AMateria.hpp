/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juligonz <juligonz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/07 14:32:08 by juligonz          #+#    #+#             */
/*   Updated: 2021/02/07 14:55:39 by juligonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_H
#define AMATERIA_H

#include <string>
#include "ICharacter.hpp"

class AMateria
{
private:
	std::string	_type;
	unsigned int _xp;
	
	AMateria();

public:
	AMateria(std::string const &type);
	AMateria(const AMateria &);
	AMateria & operator=(const AMateria &);
	virtual ~AMateria();

	std::string const &getType() const;
	unsigned int getXP() const;
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);
};
#endif