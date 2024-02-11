/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sydauria <sydauria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 18:07:49 by greengo           #+#    #+#             */
/*   Updated: 2024/02/11 22:27:12 by sydauria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>
#include <cstddef>

Zombie	*newZombie(std::string name) {
	Zombie *new_Zombie = NULL; 
	try {
		new_Zombie = new Zombie(name);
	} catch (const std::bad_alloc& e) {
		std::cerr << "L'allocation de mémoire a échoué : " << e.what() << std::endl;
	}
	return (new_Zombie);
}

// Zombie	*zombieHorde( int N, std::string name ) {
// 	Zombie *zombieArray = new Zombie[N];
// 	for (int i = 0; i < N; i++) {
// 		zombieArray[i] = Zombie(name);
// 		zombieArray[i].announce();
// 	}
// 	return (zombieArray);
// }

void	destroyZombie(Zombie *thisZombie) {
	delete thisZombie;
}
