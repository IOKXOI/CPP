/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: greengo <greengo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 18:32:42 by greengo           #+#    #+#             */
/*   Updated: 2023/10/19 10:20:42 by greengo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name): name(name), weapon(NULL) {
    std::cout << "Personnalized HumanB constructor called." << std::endl;
} 

HumanB::~HumanB() {
    std::cout << "Default HumanB destructor called." << std::endl;
}

void    HumanB::setWeapon(Weapon &weapon){
    this->weapon = &weapon;
}

void    HumanB::attack(void){
    if (weapon == NULL) {
        std::cout << this->name << " had bad idea to attack without weapon. What'll happen to " << this->name << "." << std::endl;
        return;
    }
    else
        std::cout << this->name << " attack with their " << weapon->getType() << "." << std::endl;
}