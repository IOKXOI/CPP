/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: greengo <greengo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 19:11:08 by greengo           #+#    #+#             */
/*   Updated: 2023/10/19 10:28:28 by greengo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &type): name(name), weapon(type) {
    std::cout << "Complete HumanA constructor." << std::endl; 
}

HumanA::~HumanA() {
    std::cout << "Default HumanA destructor called." << std::endl; 
}

void    HumanA::attack(void){
    std::cout << this->name << " attack with their " << weapon.getType() << "." << std::endl;
}