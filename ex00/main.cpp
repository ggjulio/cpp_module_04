/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juligonz <juligonz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/06 04:50:57 by juligonz          #+#    #+#             */
/*   Updated: 2021/02/06 06:41:31 by juligonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"
#include "Peon.hpp"
#include "Victim.hpp"
#include <iostream>

int main(){
	{
	Sorcerer robert("Robert", "the Magnificent");
	Victim jim("Jimmy");
	Peon joe("Joe");
	
	std::cout << robert << jim << joe;
	robert.polymorph(jim);
	robert.polymorph(joe);
	}
	std::cout << "##################### BORING ####################" << std::endl;
	{
	Sorcerer  *robert = new Sorcerer("Robert", "the Magnificent");
	Victim *jim = new Victim("Jimmy");
	Peon *joe = new Peon("Joe");
	
	std::cout << *robert << *jim << *joe;
	robert->polymorph(*jim);
	robert->polymorph(*joe);
	delete joe;
	delete jim;
	delete robert;
	}
	std::cout << "##################### Still BORING ####################" << std::endl;
	{
	Victim *jim = new Peon("Joe");
		
	delete jim;
	}
	std::cout << "################## Still, still BORING ####################" << std::endl;
	{
	Peon jim("Joe");
	Victim &victim = jim;

	victim.polymorphed();	
	}
	std::cout << "################## Still, still still...  #################" << std::endl;
	{

	}
	return 0;
}