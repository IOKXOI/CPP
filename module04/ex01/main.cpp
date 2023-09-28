/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: greengo <greengo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 16:31:35 by greengo           #+#    #+#             */
/*   Updated: 2023/09/28 12:30:27 by greengo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main( void ) {
    
//const Animal* meta = new Animal();
//Animal* Rex = new Dog();
Animal* Canelle = new Cat();
//Animal* Nuve = new Cat();
Animal* Nuve = Canelle;

//std::cout << Rex->gettype() << " " << std::endl;
//Rex->makeSound();
//std::cout << Canelle->gettype() << " " << std::endl;
//Canelle->makeSound(); //will output the cat sound!
//std::cout << meta->gettype() << std::endl;
//meta->makeSound();
Canelle->setIdea("Beautifull day");
std::cout << "Canelle is thinking: " << Canelle->getIdea(0) << std::endl;
std::cout << "Nuve is thinking: " << Nuve->getIdea(0) << std::endl;
Canelle->setIdea("OUAIS OUAIS OUAIS");
std::cout << "Nuve is thinking: " << Nuve->getIdea(1) << std::endl;
//Nuve->setIdea("Not good day.");


// Canelle->setIdea("Get up, stand up, humans");
// std::cout << "Canelle is thinking: " << Canelle->getIdea(1) << std::endl;
// std::cout << "Nuve is thinking: " << Nuve->getIdea(1) << std::endl;
// Nuve->setIdea("Ain't a bad day so much.");
// std::cout << "Canelle is thinking: " << Canelle->getIdea(2) << std::endl;

    return 0;
}