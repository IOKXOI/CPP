/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sydauria <sydauria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 18:07:58 by greengo           #+#    #+#             */
/*   Updated: 2024/02/11 22:27:42 by sydauria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie	*Franky;

	Franky = newZombie("Franky");
	if (!Franky)
		return (1);
	Franky->announce();
	randomChump("Brand");	
	delete Franky;
	return (0);
}
