/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: greengo <greengo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 19:10:56 by greengo           #+#    #+#             */
/*   Updated: 2023/09/21 19:12:16 by greengo          ###   ########.fr       */
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
        std::string gettype();
        void makeSound() const;
              
    private:


};

std::ostream &operator<<(std::ostream &os, WrongCat &Animal);