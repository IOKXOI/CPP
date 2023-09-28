/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: greengo <greengo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 17:49:52 by greengo           #+#    #+#             */
/*   Updated: 2023/09/28 04:54:24 by greengo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Animal.hpp"
#include "Brain.hpp"

class Cat: public Animal{
    public:
        Cat();
        Cat(const Cat &toCopie);
        Cat& operator=(const Cat &toCopie);
        ~Cat();  
        void makeSound() const;
        void setIdea(const std::string idea);
        std::string getIdea(uint8_t ideaIndex) const;
              
    private:
        Brain* _brain;
};
    