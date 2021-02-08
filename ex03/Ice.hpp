/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juligonz <juligonz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/07 15:07:35 by juligonz          #+#    #+#             */
/*   Updated: 2021/02/08 15:04:03 by juligonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_H
#define ICE_H

#include "AMateria.hpp"

class Ice : public AMateria
{
private:
	
public:
	Ice();
	Ice(const Ice &);
	Ice & operator=(const Ice &);
	~Ice();

	virtual AMateria* clone() const;
	virtual void use(ICharacter& target);
};

#endif