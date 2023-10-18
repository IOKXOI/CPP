/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: greengo <greengo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 22:40:45 by greengo           #+#    #+#             */
/*   Updated: 2023/10/18 11:58:47 by greengo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AMateria.hpp"
#include <stdint.h>
#include <iostream>

class AMateria;

class ICharacter {
    public:
        virtual ~ICharacter() {}; 
        
        virtual std::string const &getName() const = 0;
        virtual void equip(AMateria* materia) = 0;
        virtual void unequip(uint8_t idx) = 0;
        virtual void use (int idx, ICharacter &target) = 0;
        
    private:
};
