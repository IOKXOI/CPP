/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sydauria <sydauria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 18:07:58 by greengo           #+#    #+#             */
/*   Updated: 2024/02/13 13:37:55 by sydauria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie	*horde;
	horde = zombieHorde(100, "El Chapo");
	if (!horde)
		return (1);
	for (int i = 0; i < 100; i++) 
		horde[i].announce();
	delete[] horde;
	return (0);
}
//RAJOUTER 		zombieArray[i].announce(); // DEPLACER DANS MAIN
