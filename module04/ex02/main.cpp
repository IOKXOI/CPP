/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: greengo <greengo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 16:31:35 by greengo           #+#    #+#             */
/*   Updated: 2023/09/30 19:28:51 by greengo          ###   ########.fr       */
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
std::cout << "\033[31m=== Polymorphing COPIE cloning starting [new Animal Nuve will be create by cloning cat. Nuve should be think same as Canelle] ===\033[0m" << std::endl;  
Animal *Nuve = Canelle->clone_cat();
std::cout << "Nuve is thinking: " << Nuve->getIdea(0) << std::endl;
std::cout << "\033[31m=== Set new idea [Nuve look like a good fella] to Canelle. Nuve should not think here ===\033[0m" << std::endl;
Canelle->setIdea("*Nuve look like a good fella*");
std::cout << "Nuve is thinking: " << Nuve->getIdea(1) << std::endl;
std::cout << "Canelle is thinking: " << Canelle->getIdea(1) << std::endl;
std::cout << "\033[31m===Set the new idea [Qu'est ce que c'est trop beau la vie d'artiste] to Nuve. Canelle should not change ideas\033[0m" << std::endl;
Nuve->setIdea("*Qu'est ce que c'est trop beau la vie d'artiste*");
std::cout << "Nuve is thinking: " << Nuve->getIdea(1) << std::endl;
std::cout << "Canelle is thinking: " << Canelle->getIdea(1) << std::endl;

std::cout << "\033[31m=== Creating [Gribouille] cat ===\033[0m" << std::endl;
Animal* Gribouille = new Cat();
Gribouille->setIdea("*Euuuuuuuuh les chosent se passent ou quoi?*");
std::cout << "Gribouille is thinking: " << Gribouille->getIdea(0) << std::endl;
std::cout << "\033[32m=== ICI GRIBOUILLE DELETE\033[0m " << std::endl;
std::cout << "\033[31m=== Polymorphing ASSIGNEMENT cloning starting [new Animal Gribouille will be create by cloning cat. Gribouille should be thinkame as Canelle] ===\033[0m" << std::endl;
Gribouille = Canelle->clone_cat(Gribouille);
std::cout << "Gribouille type: ";
std::cout << Gribouille->gettype() << std::endl;
std::cout << "Gribouille is thinking: " << Gribouille->getIdea(0) << std::endl;
std::cout << "Gribouille is thinking: " << Gribouille->getIdea(1) << std::endl;

std::cout << std::endl;
 
Animal *Snoop = new Dog();
Snoop->setIdea("*It was a dark and stormy night...*");
std::cout << "Snop is thinking: " << Snoop->getIdea(0) << std::endl;
std::cout << "\033[31m=== Polymorphing COPIE cloning copie starting [new Animal Slink will be create by cloning dog. Slink should be think same as Snoop] ===\033[0m" << std::endl;  
Animal* Slink = Snoop->clone_dog();
std::cout << "Slink is thinking: " << Slink->getIdea(0) << std::endl;
std::cout << "\033[31m=== Set new idea [Who Am I(What's my name)?] to Snoop. Slink should not think here ===\033[0m" << std::endl;
Snoop->setIdea("*Who Am I(What's my name)?*");
std::cout << "Slink is thinking: " << Slink->getIdea(1) << std::endl;
std::cout << "Snoop is thinking: " << Snoop->getIdea(1) << std::endl;
std::cout << "\033[31m===Set the new idea [*I got a woody.*] to Slink. Snoop should not change ideas\033[0m" << std::endl;
Slink->setIdea("*I got a woody*");
std::cout << "Slink is thinking: " << Slink->getIdea(1) << std::endl;
std::cout << "Snoop is thinking: " << Snoop->getIdea(1) << std::endl;

std::cout << "\033[31m=== Creating [FrankThePug] dog ===\033[0m" << std::endl;
Animal* FrankThePug = new Dog();
FrankThePug->setIdea("*I used to love chasing cars, you know? It's a dog thing. And then one day, I woke up and I realized I don't have a driver's license. I mean, who am I chasing? Nobody, that's who.*");
std::cout << "Frank is thinking: " << FrankThePug->getIdea(0) << std::endl;
FrankThePug = Snoop->clone_dog(FrankThePug);
std::cout << "\033[31m=== Polymorphing ASSIGNEMENT cloning starting [new Animal Frank will be create by cloning dog. Frank should be think same as Snoop] ===\033[0m" << std::endl;
std::cout << "Frank is thinking: " << FrankThePug->getIdea(0) << std::endl;
std::cout << "Frank is thinking: " << FrankThePug->getIdea(1) << std::endl;

Nuve->setIdea("Not good day.");
std::cout << "\033[31m=== Test for mix cat and dog ===\033[0m" << std::endl;
std::cout << "Canelle = Snoop->clone(Canelle)";
Canelle = Snoop->clone_dog(Canelle);

std::cout << "Canelle type is: " << Canelle->gettype() << std::endl;
std::cout << "Canelle is thinking: " << Canelle->getIdea(0) << std::endl;
std::cout << "Canelle is thinking: " << Canelle->getIdea(1) << std::endl;
Canelle->makeSound();

delete (Canelle);
delete (Nuve);
delete (Gribouille);
delete (Snoop);
delete (Slink);
delete (FrankThePug);


// Canelle->setIdea("Get up, stand up, humans");
// std::cout << "Canelle is thinking: " << Canelle->getIdea(1) << std::endl;
// std::cout << "Nuve is thinking: " << Nuve->getIdea(1) << std::endl;
// Nuve->setIdea("Ain't a bad day so much.");
// std::cout << "Canelle is thinking: " << Canelle->getIdea(2) << std::endl;

    return 0;
}