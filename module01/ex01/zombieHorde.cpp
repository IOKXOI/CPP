/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: greengo <greengo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 18:07:49 by greengo           #+#    #+#             */
/*   Updated: 2023/10/19 07:14:20 by greengo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

Zombie	*newZombie(std::string name) {
	Zombie *newZombie = NULL;
	try {
		newZombie = new Zombie(name);
	}
	catch (const std::bad_alloc &e) {
		std::cout << "Memory allocation failed: " << e.what() << std::endl;
	}
	return (newZombie);
}

void	randomChump(std::string name) {
	Zombie  newZombie = Zombie(name);
	newZombie.announce();
}

Zombie	*zombieHorde( int N, std::string name ) {
	if (N < 0 || N > 2147483647) {
		std::cout << "Invalid number." << std::endl;
		return (NULL);
	}
	Zombie *zombieArray = NULL;
	
	try {
		zombieArray = new Zombie[N];
	}
	catch (const std::bad_alloc &e) {
		std::cout << "Memory allocation failed: " << e.what() << std::endl;
		return (NULL);
	}
	for (int i = 0; i < N; i++) {
		zombieArray[i] = Zombie(name);
		zombieArray[i].announce();
	}
	return (zombieArray);
}

void	destroyZombie(Zombie *thisZombie) {
	delete thisZombie;
}
