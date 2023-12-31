/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: greengo <greengo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 17:49:52 by greengo           #+#    #+#             */
/*   Updated: 2023/09/30 13:16:13 by greengo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Animal.hpp"

class Cat: public Animal{
    public:
        Cat();
        Cat(const Cat &toCopie);
        virtual Cat& operator=(const Cat &toCopie);
        virtual ~Cat();  
        
        void makeSound() const;
        void setIdea(const std::string idea);
        virtual std::string getIdea(uint8_t ideaIndex) const;
        virtual Cat* clone() const;
        virtual Cat* clone(Animal *toDelete) const;
        
              
    private:
        Brain* _brain;
};
    