/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juligonz <juligonz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/06 04:51:18 by juligonz          #+#    #+#             */
/*   Updated: 2021/02/06 06:07:22 by juligonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_HPP
#define SORCERER_HPP

#include <string>
#include "Victim.hpp"
#include "Peon.hpp"

class Sorcerer
{
private:
	std::string _name;
	std::string _title;
	
	Sorcerer();
public:
	Sorcerer(const std::string & name, const std::string & title);
	Sorcerer(const Sorcerer &);
	Sorcerer & operator=(const Sorcerer &);
	virtual ~Sorcerer();

	std::string getName() const;
	std::string getTitle() const;
	void polymorph(Victim const &)  const;

};

std::ostream& operator <<(std::ostream& os, const Sorcerer &s);

#endif