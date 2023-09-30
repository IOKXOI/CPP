/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: greengo <greengo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 16:41:40 by greengo           #+#    #+#             */
/*   Updated: 2023/09/28 14:25:15 by greengo          ###   ########.fr       */
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


//
void Brain::setIdea(const std::string idea) {
    uint8_t i = 0;
    while (!ideas[i].empty() && i < 100) {
        i++;
    }
    ideas[i] = idea;
}

std::string Brain::getIdea(uint8_t ideaIndex) {
    return(ideas[ideaIndex]);
}

