/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sydauria <sydauria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 12:46:29 by sydauria          #+#    #+#             */
/*   Updated: 2024/02/13 13:11:04 by sydauria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "HumanA.hpp"
#include "HumanB.hpp"

int main(void) {

    Weapon club = Weapon("crude spiked club");
    HumanA bob("Bob", club);
    bob.attack();
    club.setType("some other type of club");
    bob.attack();
    
    Weapon bat = Weapon("crude spiked bat");
    HumanB jim("Jim");
    jim.setWeapon(bat);
    jim.attack();
    bat.setType("some other type of bat");
    jim.attack();

    {
        Weapon bat = Weapon("crude spiked bat");
        HumanB jim("Jim");
        // jim.setWeapon(bat);
        jim.attack();
        bat.setType("some other type of bat");
        jim.attack();   
    }
    return 0;
}
