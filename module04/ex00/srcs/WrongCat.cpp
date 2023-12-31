/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: greengo <greengo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 19:12:22 by greengo           #+#    #+#             */
/*   Updated: 2023/09/21 19:21:01 by greengo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() {
    std::cout << "WrongCat default constructor called." << std::endl;
    type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat &toCopie): WrongAnimal() {
    std::cout << "WrongCat copie constructor called." << std::endl;
    type = toCopie.type;
}

WrongCat &WrongCat::operator=(const WrongCat &toCopie) {
    if (this != &toCopie) {
        type = toCopie.type;
    }
    return (*this);
}

WrongCat::~WrongCat() {
    std::cout << "Default WrongCat destructor called." << std::endl;
}

std::string WrongCat::gettype() {
    return (type);
}

void WrongCat::makeSound() const{
    std::cout << "WrongMiaous" << std::endl;
}

std::ostream &operator<<(std::ostream &os, WrongCat &Animal) {
    std::cout << Animal.gettype() << std::endl;
    return (os);
}