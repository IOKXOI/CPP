/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sydauria <sydauria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 18:07:49 by greengo           #+#    #+#             */
/*   Updated: 2023/06/28 11:03:21 by sydauria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*newZombie(std::string name) {
	return (new Zombie(name));
}

Zombie	*zombieHorde( int N, std::string name ) {
	Zombie *zombieArray = new Zombie[N];
	for (int i = 0; i < N; i++) {
		zombieArray[i] = Zombie(name);
		zombieArray[i].announce();
	}
	return (zombieArray);
}

void	destroyZombie(Zombie *thisZombie) {
	delete thisZombie;
}
