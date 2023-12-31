/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: greengo <greengo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 17:49:52 by greengo           #+#    #+#             */
/*   Updated: 2023/09/30 12:24:40 by greengo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Animal.hpp"

class Dog: public Animal{
    public:
        Dog();
        Dog(const Dog &toCopie);
        Dog& operator=(const Dog &toCopie);
        virtual ~Dog();  
        virtual void makeSound() const; 
        //
        virtual void setIdea(const std::string idea);
        virtual std::string getIdea(uint8_t ideaIndex) const;
        virtual Dog* clone() const;
        virtual Dog* clone(Animal *toDelete) const;
        //
            
    private:
        Brain *_brain;

};

std::ostream &operator<<(std::ostream &os, Dog &Animal);