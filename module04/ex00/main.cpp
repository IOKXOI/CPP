/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: greengo <greengo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 16:31:35 by greengo           #+#    #+#             */
/*   Updated: 2023/09/21 19:23:45 by greengo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main( void ) {
    Animal JSP;
    Cat Felix;
    Cat Canelle(Felix);
    Dog Rex;
    Dog Malinois;
    WrongCat WrongCanelle;
    
    std::cout << "Felix est de type :" << Felix.gettype() << std::endl;
    std::cout << "Canelle est de type :" << Canelle.gettype() << std::endl;
    std::cout << "Rex est de type :" << Rex.gettype() << std::endl;
    std::cout << "Malinois est de type:" << Malinois.gettype() << std::endl;
    Canelle.makeSound();
    Rex.makeSound();
    WrongCanelle.makeSound();
    
    return 0;
}