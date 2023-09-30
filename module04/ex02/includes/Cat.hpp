/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: greengo <greengo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 17:49:52 by greengo           #+#    #+#             */
/*   Updated: 2023/09/30 19:22:08 by greengo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Animal.hpp"

class Cat: public Animal{
    public:
        Cat();
        Cat(const Cat &toCopie);
        Cat(const Animal &toCopie);
        virtual Cat& operator=(const Cat &toCopie);
        virtual ~Cat();  
        
        void makeSound() const;
        void setIdea(const std::string idea);
        virtual std::string getIdea(uint8_t ideaIndex) const;
        virtual Cat* clone_cat() const;
        virtual Cat* clone_cat(const Animal *toDelete) const;
        
              
    private:
        Brain* _brain;
};
    