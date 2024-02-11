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
    ClapTrap Tian("Tianonimo");
	ClapTrap Yoseph("Yogotaga");
	ClapTrap Ismael("Isma");
	ClapTrap Sylvain(Tian);
	Yoseph = Ismael;

	Tian.attack("Yogataga");
	chuck.takeDamage(0);
	chuck.beRepaired(10);
	chuck.takeDamage(132);
	chuck.attack("Me");
	chuck.beRepaired(2);
	chuck.takeDamage(10);
	foreign.attack("John Doe");

}