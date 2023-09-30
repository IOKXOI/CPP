/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: greengo <greengo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 17:22:18 by greengo           #+#    #+#             */
/*   Updated: 2023/09/30 19:22:00 by greengo          ###   ########.fr       */
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
        
        virtual void makeSound() const = 0;
        virtual void setIdea(const std::string idea);
        virtual std::string getIdea(uint8_t ideaIndex) const;
        virtual Animal* clone_cat() const;
        virtual Animal* clone_dog() const;
        virtual Animal* clone_cat(const Animal *toDelete) const;
        virtual Animal* clone_dog(const Animal *toDelete) const;


    protected:
            
    private:
        std::string _type;
        


};

std::ostream &operator<<(std::ostream &os, const Animal &Animal);