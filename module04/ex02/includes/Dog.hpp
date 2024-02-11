/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: greengo <greengo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 17:49:52 by greengo           #+#    #+#             */
/*   Updated: 2023/10/18 02:10:17 by greengo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Animal.hpp"

class Dog: public AAnimal{
    public:
        Dog();
        Dog(const Dog &toCopy);
        Dog(const AAnimal &toCopy);
        Dog& operator=(const Dog &toCopy);
        virtual ~Dog();  
        virtual void makeSound() const; 
        //
        virtual void setIdea(const std::string idea);
        virtual std::string getIdea(uint8_t ideaIndex) const;
        virtual Dog* clone_dog() const;
        virtual Dog* clone_dog(const AAnimal *toDelete) const;
        //
            
    private:
        Brain *_brain;

};

std::ostream &operator<<(std::ostream &os, Dog &Animal);