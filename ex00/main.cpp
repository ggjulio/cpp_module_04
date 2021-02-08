/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juligonz <juligonz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/06 04:50:57 by juligonz          #+#    #+#             */
/*   Updated: 2021/02/08 08:54:02 by juligonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"
#include "Parisien.hpp"
#include "Lyonnais.hpp"
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
	std::cout << "############################################################" << std::endl;
	std::cout << "################## Another 2 useless classes ###############" << std::endl;
	std::cout << "################## Still boring........      ###############" << std::endl;
	std::cout << "############################################################" << std::endl;
	{
		Sorcerer robert("Robert", "the Magnificent");
		Parisien gabriel("Gabriel");
		
		std::cout << robert << gabriel;
		robert.polymorph(gabriel);
	}
	std::cout << "############################################################" << std::endl;
	{
		Sorcerer robert("Robert", "the Magnificent");
		Lyonnais gabriel("Louis");
		
		std::cout << robert << gabriel;
		robert.polymorph(gabriel);
	}
	return 0;
}