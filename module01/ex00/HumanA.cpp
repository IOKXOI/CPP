/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: greengo <greengo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 19:11:08 by greengo           #+#    #+#             */
/*   Updated: 2023/07/05 14:05:52 by greengo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon)
    : name(name)
    , weapon(weapon) {}

HumanA::~HumanA() {}

void    HumanA::attack(void){
    std::cout << this->name << " attack with their " << weapon.getType() << std::endl;
}