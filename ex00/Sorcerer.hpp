/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juligonz <juligonz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/06 04:51:18 by juligonz          #+#    #+#             */
/*   Updated: 2021/02/06 05:47:58 by juligonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_HPP
#define SORCERER_HPP

#include <string>

class Sorcerer
{
private:
	std::string _name;
	std::string _title;
	
	Sorcerer();
public:
	Sorcerer(std::string name, std::string title);
	Sorcerer & operator=(const Sorcerer &);
	~Sorcerer();

	std::string getName() const;
	std::string getTitle() const;

};

std::ostream& operator <<(std::ostream& os, const Sorcerer &s);

#endif