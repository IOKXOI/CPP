/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: greengo <greengo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 19:10:56 by greengo           #+#    #+#             */
/*   Updated: 2023/09/27 22:09:09 by greengo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal{
    public:
        WrongCat();
        WrongCat(const WrongCat &toCopie);
        WrongCat& operator=(const WrongCat &toCopie);
        ~WrongCat();  
        virtual void makeSound() const;
              
    private:


};

std::ostream &operator<<(std::ostream &os, WrongCat &Animal);