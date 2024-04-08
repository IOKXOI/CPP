/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sydauria <sydauria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 16:41:40 by greengo           #+#    #+#             */
/*   Updated: 2024/04/08 09:26:28 by sydauria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include "Animal.hpp"
#include "Dog.hpp"

Brain::Brain() {
    std::cout << "Brain default constructor called." << std::endl;
}

Brain::Brain(const Brain &toCopie) {
    std::cout << "Brain copie constructor called." << std::endl;
    for (int i = 0; i < 100; i++) {
        ideas[i] = toCopie.ideas[i];
    }
}

Brain &Brain::operator=(const Brain &toCopie) {
    if (this != &toCopie) {
        std::cout << "Brain assigment constructor called." << std::endl;
        for (int i = 0; i < 100; i++) {
            ideas[i] = toCopie.ideas[i];
        }
    }
return (*this);
}

Brain::~Brain() {
    std::cout << "Default Brain destructor called." << std::endl;
}

std::ostream &operator<<(std::ostream &os, Brain &Brain) {
	std::cout << &Brain << std::endl;
	return (os);
}
