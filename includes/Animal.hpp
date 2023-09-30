/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: greengo <greengo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 17:22:18 by greengo           #+#    #+#             */
/*   Updated: 2023/09/30 02:37:05 by greengo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>
#include <iostream>
#include <stdint.h>
#include "Brain.hpp"

class Animal {
    public:
        Animal();
        Animal(const std::string type);
        Animal(const Animal &toCopie);
        virtual Animal& operator=(const Animal &toCopie);
        virtual ~Animal();
        
        std::string gettype() const;
        
        virtual void makeSound() const;
        virtual void setIdea(const std::string idea);
        virtual std::string getIdea(uint8_t ideaIndex) const;
        virtual Animal* clone() const;
        virtual Animal* clone(Animal *toDelete) const;

    protected:
            
    private:
        std::string _type;
        


};

std::ostream &operator<<(std::ostream &os, const Animal &Animal);