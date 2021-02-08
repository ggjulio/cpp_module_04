/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juligonz <juligonz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/08 14:53:14 by juligonz          #+#    #+#             */
/*   Updated: 2021/02/08 22:11:33 by juligonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_H
#define CHARACTER_H

#include <string>
#include "ICharacter.hpp"
#include "AMateria.hpp"


class Character : public ICharacter
{
private:
	std::string _name;
	AMateria *_materias[4];
	
	Character();
public:
	Character(std::string name);
	Character(const Character &);
	Character & operator=(const Character &);
	~Character();

	std::string const &getName() const;
	void equip(AMateria *m);
	void unequip(int idx);
	void use(int idx, ICharacter &target);
};

#endif