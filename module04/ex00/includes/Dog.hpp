/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: greengo <greengo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 17:49:52 by greengo           #+#    #+#             */
/*   Updated: 2023/09/21 18:34:12 by greengo          ###   ########.fr       */
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
        std::string gettype();   
        void makeSound() const;     
    private:


};

std::ostream &operator<<(std::ostream &os, Dog &Animal);