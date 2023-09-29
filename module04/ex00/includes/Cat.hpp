/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: greengo <greengo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 17:49:52 by greengo           #+#    #+#             */
/*   Updated: 2023/09/21 18:34:17 by greengo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Animal.hpp"

class Cat: public Animal{
    public:
        Cat();
        Cat(const Cat &toCopie);
        Cat& operator=(const Cat &toCopie);
        ~Cat();  
        std::string gettype();
        void makeSound() const;
              
    private:


};

std::ostream &operator<<(std::ostream &os, Cat &Animal);