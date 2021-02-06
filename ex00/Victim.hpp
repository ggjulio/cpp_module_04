/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juligonz <juligonz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/06 04:51:23 by juligonz          #+#    #+#             */
/*   Updated: 2021/02/06 06:25:04 by juligonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef VICTIM_HPP
#define VICTIM_HPP

#include <string>

class Victim
{
private:
	Victim();
protected:
	std::string _name;
public:
	Victim(const std::string & name);
	Victim(const Victim &);
	Victim & operator=(const Victim &);
	virtual ~Victim();

	std::string getName() const;

	virtual void polymorphed() const;

};

std::ostream& operator <<(std::ostream& os, const Victim &s);

#endif