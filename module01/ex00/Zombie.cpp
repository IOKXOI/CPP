/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sydauria <sydauria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 18:07:54 by greengo           #+#    #+#             */
/*   Updated: 2023/06/28 09:56:18 by sydauria         ###   ########.fr       */
/*                                                                               */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

Zombie::Zombie() {}

Zombie::Zombie(const Zombie &toCopy) {
    _name = toCopy._name;
}

Zombie &Zombie::operator=(const Zombie &toCopy) {
    if (this != &toCopy) {
        _name = toCopy._name;
    }
    return (*this);
}

Zombie::Zombie(std::string name) {
    this->_name = name;
}

Zombie::~Zombie() {}

void    Zombie::announce( void ) {
    std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
