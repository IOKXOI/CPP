/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: greengo <greengo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 17:22:18 by greengo           #+#    #+#             */
/*   Updated: 2023/09/28 05:01:29 by greengo          ###   ########.fr       */
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
        Animal& operator=(const Animal &toCopie);
        ~Animal();
        
        std::string gettype() const;
        virtual void setIdea(const std::string idea);
        virtual void makeSound() const;
        virtual std::string getIdea(uint8_t ideaIndex) const;

    protected:
            
    private:
        std::string _type;
        


};

std::ostream &operator<<(std::ostream &os, const Animal &Animal);