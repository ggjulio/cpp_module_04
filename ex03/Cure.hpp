/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juligonz <juligonz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/07 15:03:07 by juligonz          #+#    #+#             */
/*   Updated: 2021/02/07 15:10:46 by juligonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_H
#define CURE_H

#include "AMateria.hpp"

class Cure : public AMateria
{
private:
	
public:
	Cure();
	Cure(const Cure &);
	Cure & operator=(const Cure &);
	~Cure();

	virtual AMateria* clone() const;
	virtual void use(ICharacter& target);
};

#endif