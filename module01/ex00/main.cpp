/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: greengo <greengo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 18:07:58 by greengo           #+#    #+#             */
/*   Updated: 2023/10/19 07:07:11 by greengo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie	*Franky;
	Franky = newZombie("Franky");
	Franky->announce();
	randomChump("Brand");
	delete Franky;
	return (0);
}
