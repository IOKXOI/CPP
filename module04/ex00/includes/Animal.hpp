/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: greengo <greengo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 17:22:18 by greengo           #+#    #+#             */
/*   Updated: 2023/09/21 18:34:04 by greengo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>
#include <iostream>

class Animal {
    public:
        Animal();
        Animal(const Animal &toCopie);
        Animal& operator=(const Animal &toCopie);
        ~Animal();
        std::string gettype();
        void makeSound() const;

    protected:
        std::string type;
            
    private:


};

std::ostream &operator<<(std::ostream &os, Animal &Animal);