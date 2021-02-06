/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juligonz <juligonz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/06 04:51:14 by juligonz          #+#    #+#             */
/*   Updated: 2021/02/06 06:24:39 by juligonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_HPP
#define PEON_HPP

#include <string>
#include "Victim.hpp"
class Peon : public Victim
{
private:
	Peon();
public:
	Peon(const std::string & name);
	Peon(const Peon &);
	Peon & operator=(const Peon &);
	virtual ~Peon();

	std::string getName() const;

	virtual void polymorphed() const;

};

std::ostream& operator <<(std::ostream& os, const Peon &s);

#endif