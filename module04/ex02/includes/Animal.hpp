/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: greengo <greengo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 17:22:18 by greengo           #+#    #+#             */
/*   Updated: 2023/10/18 02:10:17 by greengo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>
#include <iostream>
#include <stdint.h>
#include "Brain.hpp"

class AAnimal {
    public:
        AAnimal();
        AAnimal(const std::string type);
        AAnimal(const AAnimal &toCopy);
        virtual AAnimal& operator=(const AAnimal &toCopy);
        virtual ~AAnimal();
        
        std::string gettype() const;
        
        virtual void makeSound() const = 0;
        virtual void setIdea(const std::string idea);
        virtual std::string getIdea(uint8_t ideaIndex) const;
        virtual AAnimal* clone_cat() const;
        virtual AAnimal* clone_dog() const;
        virtual AAnimal* clone_cat(const AAnimal *toDelete) const;
        virtual AAnimal* clone_dog(const AAnimal *toDelete) const;


    protected:
            
    private:
        std::string _type;
        


};

std::ostream &operator<<(std::ostream &os, const AAnimal &Animal);