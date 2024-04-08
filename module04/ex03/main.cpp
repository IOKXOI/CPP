/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sydauria <sydauria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 16:31:35 by greengo           #+#    #+#             */
/*   Updated: 2024/04/08 10:42:12 by sydauria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

int main()
{
    IMateriaSource* materiaFactory = new MateriaSource();
    materiaFactory->learnMateria(new Ice());
    materiaFactory->learnMateria(new Cure());
    ICharacter* Gandalf = new Character("Gandalf");
    AMateria* tmp;
    tmp = materiaFactory->createMateria("ice");
    Gandalf->equip(tmp);
    tmp = materiaFactory->createMateria("cure");
    Gandalf->equip(tmp);
    ICharacter* Saruman = new Character("Saruman");
    std::cout << "Gandalf ";
    Gandalf->use(0, *Saruman);
    std::cout << "Gandalf ";
    Gandalf->use(1, *Saruman);
    delete Saruman;
    delete Gandalf;
    delete materiaFactory;
    return 0;

    // IMateriaSource* src = new MateriaSource();
    // src->learnMateria(new Ice());
    // src->learnMateria(new Cure());
    // ICharacter* me = new Character("me");
    // AMateria* tmp;
    // tmp = src->createMateria("ice");
    // me->equip(tmp);
    // tmp = src->createMateria("cure");
    // me->equip(tmp);
    // ICharacter* bob = new Character("bob");
    // me->use(0, *bob);
    // me->use(1, *bob);
    // delete bob;
    // delete me;
    // delete src;
    // return 0;
}
