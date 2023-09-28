/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: greengo <greengo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 17:49:52 by greengo           #+#    #+#             */
/*   Updated: 2023/09/28 14:12:09 by greengo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Animal.hpp"

class Dog: public Animal{
    public:
        Dog();
        Dog(const Dog &toCopie);
        Dog& operator=(const Dog &toCopie);
        ~Dog();  
        void makeSound() const; 
        //
        void setIdea(const std::string idea);
        std::string getIdea(uint8_t ideaIndex) const;
        Dog* clone();
        //
            
    private:
        Brain *_brain;

};

std::ostream &operator<<(std::ostream &os, Dog &Animal);