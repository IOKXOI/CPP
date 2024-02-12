/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: greengo <greengo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 04:10:23 by greengo           #+#    #+#             */
/*   Updated: 2023/11/13 17:09:41 by greengo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
    
	std::cout << "\033[31mHere normal constructor of Claptrap Ben, named Bohmer:\033[0m" << std::endl;
	ClapTrap Ben("Bohmer");

	std::cout << "\033[31mHere normal constructor of Claptrap Booba, named Fett:\033[0m" << std::endl;
	ClapTrap Booba("Fett");

	std::cout << "\033[33mHere Booba attack Ben named Bohmer\033[0m" << std::endl;
	Booba.attack("Ben");
	Ben.takeDamage(0);
	Ben.beRepaired(10);

	std::cout << "\033[31mHere normal constructor of Claptrap Satoshi, named Nakamoto:\033[0m" << std::endl;
	ClapTrap Satoshi("Nakamoto");

	std::cout << "\033[31mHere copie constructor of Claptrap Nora, from Ben:\033[0m" << std::endl;
	ClapTrap Nora(Ben);

	std::cout << "\033[33mHere Nora, constructed by copie from Ben attack Satoshi named Nakamoto\033[0m" << std::endl;
	Nora.attack("Nakamuto");
	Satoshi.takeDamage(0);
	Satoshi.beRepaired(10);

	std::cout << "\033[33mHere Booba took 92 damages\033[0m" << std::endl;
	Booba.takeDamage(92);
	
	std::cout << "\033[31mHere assignment constructor of Claptrap Booba, from Satoshi:\033[0m" << std::endl;
	Booba = Satoshi;

	std::cout << "\033[33mHere Booba attack, but Booba just constructed by assignment from Satoshi, so Booba should be named now Nakamoto:\033[0m" << std::endl;
	Booba.attack("Ben");
	Ben.takeDamage(0);
	Ben.beRepaired(10);


	std::cout << "Here Nora constructed from Ben will attack 10 times, Nora already attack once, and was constructed from Ben who already repared once. So Nora should have 10 - 2 energy." << std::endl;
	std::cout << "1 : "; 
	Nora.attack("Nakamuto");
	std::cout << std::endl;
	std::cout << "2 : ";
	Nora.attack("Nakamuto");
	std::cout << std::endl;
	std::cout << "3 : ";
	Nora.attack("Nakamuto");
	std::cout << std::endl;
	std::cout << "4 : "; 
	Nora.attack("Nakamuto");
	std::cout << std::endl;
	std::cout << "5 : "; 
	Nora.attack("Nakamuto");
	std::cout << std::endl;
	std::cout << "6 : ";
	Nora.attack("Nakamuto");
	std::cout << std::endl;
	std::cout << "7 : ";
	Nora.attack("Nakamuto");
	std::cout << std::endl;
	std::cout << "8 : "; 
	Nora.attack("Nakamuto");
	std::cout << std::endl;
	std::cout << "9 : ";
	Nora.attack("Nakamuto");
	std::cout << std::endl;
	std::cout << "10 : "; 
	Nora.attack("Nakamuto");
	std::cout << std::endl;

	std::cout << "Now destructor will called:" << std::endl;
}