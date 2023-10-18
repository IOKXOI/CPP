/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: greengo <greengo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 15:35:54 by greengo           #+#    #+#             */
/*   Updated: 2023/10/19 01:39:38 by greengo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {
    std::cout << "MateriaSource default constructor called." << std::endl;
    for (uint8_t idx = 0; idx < 4; idx++) {
        _spellsLearned[idx] = 0;
    }
}

MateriaSource::MateriaSource(const MateriaSource &toCopy) {
    std::cout << "Brain copie constructor called." << std::endl;
    for (uint8_t idx = 0; idx < 4; idx++) {
        _spellsLearned[idx] = toCopy._spellsLearned[idx];
    }
}

MateriaSource &MateriaSource::operator=(const MateriaSource &toCopy) {
    if (this != &toCopy) {
        std::cout << "MateriaSource assigment constructor called." << std::endl;
        for (uint8_t idx = 0; idx < 4; idx++) {
        _spellsLearned[idx] = toCopy._spellsLearned[idx];
    }
    }
return (*this);
}

MateriaSource::~MateriaSource() {
    std::cout << "Default MateriaSource destructor called." << std::endl;
    for (uint8_t idx = 0; idx < 4; idx++) {
        delete _spellsLearned[idx];
    }
}

void MateriaSource::learnMateria(AMateria *toCopy) {
    for (uint8_t idx = 0; idx < 4; idx++) {
        if (!_spellsLearned[idx]) {
            _spellsLearned[idx] = toCopy;
            return ;
        }
    }
}

AMateria *MateriaSource::createMateria(std::string const &type) {
    for (uint8_t idx = 0; idx < 4; idx++) {
        if (_spellsLearned[idx] && _spellsLearned[idx]->getType() == type) {
            return (_spellsLearned[idx]->clone());
        }
    }
    return (0);
} 