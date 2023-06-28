/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: greengo <greengo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 18:07:49 by greengo           #+#    #+#             */
/*   Updated: 2023/06/25 23:39:43 by greengo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie  *newZombie(std::string name) {
    return (new     Zombie(name));
}

Zombie* zombieHorde( int N, std::string name ) {
    new Zombie[42];
}

void    destroyZombie(Zombie *thisZombie) {
    delete thisZombie;
}