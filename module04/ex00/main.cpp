/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sydauria <sydauria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 16:31:35 by greengo           #+#    #+#             */
/*   Updated: 2024/04/08 10:51:31 by sydauria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main( void ) {
	// Animal JSP;
	// std::cout << "ANIMAL CREATED" << std::endl << std::endl;
	// Cat Felix;
	// std::cout << "CAT CREATED" << std::endl << std::endl;
	// Cat Canelle(Felix);
	// std::cout << "CAT CREATED BY COPIE OF CAT" << std::endl << std::endl;
	// Dog Rex;
	// std::cout << "DOG  CREATED" << std::endl << std::endl;
	// Dog Malinois;
	// std::cout << "DOG  CREATED" << std::endl << std::endl;
	// WrongCat WrongCanelle;
	// std::cout << "WRONGCAT  CREATED" << std::endl << std::endl;
	// WrongAnimal WillyWonka;
	// std::cout << "WRONGANIMAL  CREATED" << std::endl << std::endl;
	
	// std::cout << "Felix est de type: " << Felix.getType() << std::endl;
	// std::cout << "Canelle est de type: " << Canelle.getType() << std::endl;
	// std::cout << "Rex est de type: " << Rex.getType() << std::endl;
	// std::cout << "Malinois est de type: " << Malinois.getType() << std::endl;
	// std::cout << "Animal get type  " << JSP.getType() << std::endl;
	// std::cout << "WrongAnimal get type " << WillyWonka.getType() << std::endl;
	// std::cout << "WrongCat get type " << WrongCanelle	.getType() << std::endl;
	
	// std::cout << "Cat make sound ";
	// Canelle.makeSound();
	// std::cout << "Dog make sound ";
	// Rex.makeSound();
	// std::cout << "WrongCat make sound ";
	// WrongCanelle.makeSound();
	// std::cout << "WrongAnimal make sound ";
	// WillyWonka.makeSound();
	// std::cout << "Animal make sound ";
	// JSP.makeSound();

	// Animal* Chat = new Cat();
	// Animal* Chien = new Dog();

	// std::cout << "Chat: ";
	// Chat->makeSound();
	// std::cout << "Chien: ";
	// Chien->makeSound();

	// delete Chat;
	// delete Chien;

	const WrongAnimal* meta = new WrongAnimal();
	const Animal* j = new Dog();
	const WrongAnimal* i = new WrongCat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	delete meta;
	delete i;
	delete j;
	
	return 0;
}
