/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sydauria <sydauria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 19:12:22 by greengo           #+#    #+#             */
/*   Updated: 2024/04/08 09:41:40 by sydauria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(): WrongAnimal() {
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

void WrongCat::makeSound() const{
    std::cout << "Hiou 🐧" << std::endl;
}

std::ostream &operator<<(std::ostream &os, WrongCat &AAnimal) {
    std::cout << AAnimal.getType() << std::endl;
    return (os);
}
