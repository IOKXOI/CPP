/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sydauria <sydauria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 16:31:35 by greengo           #+#    #+#             */
/*   Updated: 2024/04/08 09:45:51 by sydauria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

# define GREEN	"\033[32m"
# define WHITE	"\033[37m"


int main()
{

	//Throw an error because it's abstract
	//const AAnimal* meta = new AAnimal();
	//meta->makeSound();

	// delete meta;

	// Others same test as previous
	const AAnimal* j = new Dog();
	const AAnimal* i = new Cat();

	std::cout << "j_type = " << j->getType() << " and his sound is :  ";
	i->makeSound(); //will output the cat sound!
	std::cout << "i_type = " << i->getType() << " and his sound is : ";
	j->makeSound();

	delete j;
	delete i;

	const int size = 10;
    AAnimal** animals = new AAnimal*[size];

    for (int i = 0; i < size / 2; ++i) {
        animals[i] = new Dog();
    }
    for (int i = size / 2; i < size; ++i) {
        animals[i] = new Cat();
    }

    for (int i = 0; i < size; ++i) {
        std::cout << "AAnimal type = " << animals[i]->getType() << std::endl;
        animals[i]->makeSound();
    }
    for (int i = 0; i < size; ++i) {
        delete animals[i];
    }
    delete[] animals;

	const AAnimal* t = new Dog();
	const AAnimal* x = new Cat();
	delete t;//should not create a leak
	delete x;

    return 0;
}
