/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: greengo <greengo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 18:37:45 by greengo           #+#    #+#             */
/*   Updated: 2023/09/21 19:17:05 by greengo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() {
    std::cout << "WrongAnimal default constructor called." << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &toCopie) {
    std::cout << "WrongAnimal copie constructor called." << std::endl;
    type = toCopie.type;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &toCopie) {
    std::cout << "WrongAnimal assigment constructor called." << std::endl;
    if (this != &toCopie) {
        type = toCopie.type;
    }
    return (*this);
}

WrongAnimal::~WrongAnimal() {
    std::cout << "WrongAnimal default destructor called." << std::endl;
}