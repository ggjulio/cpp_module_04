/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Lyonnais.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juligonz <juligonz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/06 04:51:14 by juligonz          #+#    #+#             */
/*   Updated: 2021/02/07 02:57:22 by juligonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LYONNAIS_HPP
#define LYONNAIS_HPP

#include <string>
#include "Victim.hpp"

class Lyonnais : public Victim
{
private:
	Lyonnais();
public:
	Lyonnais(const std::string & name);
	Lyonnais(const Lyonnais &);
	Lyonnais & operator=(const Lyonnais &);
	virtual ~Lyonnais();

	virtual void polymorphed() const;

};

std::ostream& operator <<(std::ostream& os, const Lyonnais &s);

#endif