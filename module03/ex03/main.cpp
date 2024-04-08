/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sydauria <sydauria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 04:10:23 by greengo           #+#    #+#             */
/*   Updated: 2024/04/07 21:13:51 by sydauria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "DiamondTrap.hpp"

int main(void)
{
    
	std::cout << "Constructeur diamond clap" << std::endl;
	DiamondTrap Johny("Qualidad");

	ScavTrap Alain("De l'ombre");

	FragTrap Fabrice("Ebola");

	ClapTrap LeJ("C'est le S ");

	std::cout << "DIAMONDTRAP Johny:" << std::endl;
	std::cout << "Name: " << Johny.getName() << std::endl;
	std::cout << "Hp: " << Johny.getHp() << std::endl;
	std::cout << "Energy: " << Johny.getEnergy() << std::endl;
	std::cout << "Attack: " << Johny.getAttack() << std::endl << std::endl;

	std::cout << "SCAVTRAP Alain:" << std::endl;
	std::cout << "Name: " << Alain.getName() << std::endl;
	std::cout << "Hp: " << Alain.getHp() << std::endl;
	std::cout << "Energy: " << Alain.getEnergy() << std::endl;
	std::cout << "Attack: " << Alain.getAttack() << std::endl << std::endl;

	std::cout << "FragTrap Fabrice:" << std::endl;
	std::cout << "Name: " << Fabrice.getName() << std::endl;
	std::cout << "Hp: " << Fabrice.getHp() << std::endl;
	std::cout << "Energy: " << Fabrice.getEnergy() << std::endl;
	std::cout << "Attack: " << Fabrice.getAttack() << std::endl << std::endl;
	
	std::cout << "Claptrap LeJ:" << std::endl;
	std::cout << "Name: " << LeJ.getName() << std::endl;
	std::cout << "Hp: " << LeJ.getHp() << std::endl;
	std::cout << "Energy: " << LeJ.getEnergy() << std::endl;
	std::cout << "Attack: " << LeJ.getAttack() << std::endl << std::endl;

	Alain.attack("Ebola");
	Johny.attack("Ebola");
	
	Johny.whoAmI();
	
	std::cout << "Now destructor will called:" << std::endl;
}
