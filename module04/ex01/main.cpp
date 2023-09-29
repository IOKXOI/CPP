/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: greengo <greengo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 16:31:35 by greengo           #+#    #+#             */
/*   Updated: 2023/09/29 22:08:37 by greengo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main( void ) {


//const Animal* meta = new Animal();
//Animal* Rex = new Dog();
Animal *Canelle = new Cat();

//std::cout << Rex->gettype() << " " << std::endl;
//Rex->makeSound();
//std::cout << Canelle->gettype() << " " << std::endl;
Canelle->makeSound(); //will output the cat sound!
//std::cout << meta->gettype() << std::endl;
//meta->makeSound();
Canelle->setIdea("*Beautifull day*");
std::cout << "Canelle is thinking: " << Canelle->getIdea(0) << std::endl;
std::cout << "\033[31m=== Polymorphing cloning starting [new Animal Nuve will be create by cloning cat. Nuve should be think like Canelle] ===\033[0m" << std::endl;  
Animal *Nuve = Canelle->clone();
std::cout << "Nuve is thinking: " << Nuve->getIdea(0) << std::endl;
std::cout << "\033[31m=== Set new idea [Nuve look like a good fella] to Canelle. Nuve should not think here ===\033[0m" << std::endl;
Canelle->setIdea("*Nuve look like a good fella*");
std::cout << "Nuve is thinking: " << Nuve->getIdea(1) << std::endl;
std::cout << "Canelle is thinking: " << Canelle->getIdea(1) << std::endl;
std::cout << "\033[31m===Set the new idea [Qu'est ce que c'est trop beau la vie d'artiste] to Nuve. Canelle should not change ideas\033[0m" << std::endl;
Nuve->setIdea("*Qu'est ce que c'est trop beau la vie d'artiste*");
std::cout << "Nuve is thinking: " << Nuve->getIdea(1) << std::endl;
std::cout << "Canelle is thinking: " << Canelle->getIdea(1) << std::endl;

//std::cout << "\033[31m=== Creating [Gribouille] cat ===\033[0m" << std::endl;
Animal* Gribouille = new Cat();
Gribouille->setIdea("*Euuuuuuuuh les chosent se passent ou quoi?*");
    std::cout << "Gribouille is thinking: " << Gribouille->getIdea(0) << std::endl;
std::cout << "\033[32m=== ICI GRIBOUILLE DELETE\033[0m " << std::endl;
std::cout << "\033[31m=== Polymorphing cloning starting [new Animal Nuve will be create by cloning cat. Nuve should be think like Canelle] ===\033[0m" << std::endl;
Gribouille = Canelle->clone();
//std::cout << "Gribouille type: " <<  std::endl;
std::cout << Gribouille->gettype() << std::endl;
// std::cout << "Gribouille is thinking: " <<  std::endl;
std::cout << "Gribouille is thinking: " << Gribouille->getIdea(0) << std::endl;
std::cout << "Gribouille is thinking: " << Gribouille->getIdea(1) << std::endl;

delete (Canelle);
delete (Nuve);
delete (Gribouille);
 


//Nuve->setIdea("Not good day.");


// Canelle->setIdea("Get up, stand up, humans");
// std::cout << "Canelle is thinking: " << Canelle->getIdea(1) << std::endl;
// std::cout << "Nuve is thinking: " << Nuve->getIdea(1) << std::endl;
// Nuve->setIdea("Ain't a bad day so much.");
// std::cout << "Canelle is thinking: " << Canelle->getIdea(2) << std::endl;

    return 0;
}