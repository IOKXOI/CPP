/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: greengo <greengo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 16:41:40 by greengo           #+#    #+#             */
/*   Updated: 2023/10/18 02:10:17 by greengo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include "Animal.hpp"
#include "Dog.hpp"

Brain::Brain() {
    std::cout << "Brain default constructor called." << std::endl;
}

Brain::Brain(const Brain &toCopy) {
    std::cout << "Brain copie constructor called." << std::endl;
    for (int i = 0; i < 100; i++) {
        ideas[i] = toCopy.ideas[i];
    }
}

Brain &Brain::operator=(const Brain &toCopy) {
    if (this != &toCopy) {
        std::cout << "Brain assigment constructor called." << std::endl;
        for (int i = 0; i < 100; i++) {
            ideas[i] = toCopy.ideas[i];
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

