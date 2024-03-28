/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sydauria <sydauria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 18:07:49 by greengo           #+#    #+#             */
/*   Updated: 2024/02/20 19:18:37 by sydauria         ###   ########.fr       */
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

Zombie	*zombieHorde( int N, std::string name ) {
	if (N < 1 || N > 2147483647) {
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
	}
	return (zombieArray);
}
