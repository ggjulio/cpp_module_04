/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Parisien.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juligonz <juligonz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/06 04:51:14 by juligonz          #+#    #+#             */
/*   Updated: 2021/02/07 00:52:04 by juligonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PARISIEN_HPP
#define PARISIEN_HPP

#include <string>
#include "Victim.hpp"

class Parisien : public Victim
{
private:
	Parisien();
public:
	Parisien(const std::string & name);
	Parisien(const Parisien &);
	Parisien & operator=(const Parisien &);
	virtual ~Parisien();

	virtual void polymorphed() const;

};

std::ostream& operator <<(std::ostream& os, const Parisien &s);

#endif