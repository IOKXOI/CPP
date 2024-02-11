/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: greengo <greengo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 17:49:52 by greengo           #+#    #+#             */
/*   Updated: 2023/10/18 02:10:17 by greengo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Animal.hpp"

class Cat: public AAnimal{
    public:
        Cat();
        Cat(const Cat &toCopy);
        Cat(const AAnimal &toCopy);
        virtual Cat& operator=(const Cat &toCopy);
        virtual ~Cat();  
        
        void makeSound() const;
        void setIdea(const std::string idea);
        virtual std::string getIdea(uint8_t ideaIndex) const;
        virtual Cat* clone_cat() const;
        virtual Cat* clone_cat(const AAnimal *toDelete) const;
        
              
    private:
        Brain* _brain;
};
    