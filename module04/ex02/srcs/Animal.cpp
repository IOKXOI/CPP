/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: greengo <greengo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 17:22:22 by greengo           #+#    #+#             */
/*   Updated: 2023/10/01 04:15:15 by greengo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

AAnimal::AAnimal() {
    std::cout << "Default animal constructor called." << std::endl;
    _type = "Animal";
}

AAnimal::AAnimal(const std::string type) {
    std::cout << "Animal constructor from outside." << std::endl;
    _type = type;
}

AAnimal::AAnimal(const AAnimal &toCopie) {
    std::cout << "Animal copie constructor called." << std::endl;
    _type = toCopie._type;
}

AAnimal &AAnimal::operator=(const AAnimal &toCopie) { 
    if (this != &toCopie) {
        std::cout << "Animal assigment personalized constructor called." << std::endl;
       delete (this);
    }
    return (*this);
}

AAnimal::~AAnimal() {
    std::cout << "Default Animal destructor called." << std::endl;
}

std::string AAnimal::gettype() const {
    return (_type);
}

void AAnimal::makeSound() const {
    std::cout << "Hiou I'm Animal" << std::endl;
}

//
void AAnimal::setIdea(const std::string idea) {
    (void)idea;
    return;
}
std::string AAnimal::getIdea(uint8_t ideaIndex) const{
    (void)ideaIndex;
    return ("No brain.");
}

AAnimal* AAnimal::clone_cat() const {
    std::cout << "Using Animal polymorphic copie cat_clonage." << std::endl;
    return (new Cat(*this));
}

AAnimal* AAnimal::clone_dog() const {
    std::cout << "Using Animal polymorphic copie dog_clonage." << std::endl;
    return (new Dog(*this));
}

AAnimal* AAnimal::clone_cat(const AAnimal *toDelete) const {
    std::cout << "Using Animal polymorphic assignement cat_clonage." << std::endl;
    delete toDelete;
    return (new Cat(*this));
}

AAnimal* AAnimal::clone_dog(const AAnimal *toDelete) const {
    std::cout << "Using Animal polymorphic assignement cat_clonage." << std::endl;
    delete toDelete;
    return (new Dog(*this));
}

std::ostream &operator<<(std::ostream &os, const AAnimal &Animal) {
    std::cout << Animal.gettype() << std::endl;
    return (os);
}