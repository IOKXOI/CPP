/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: greengo <greengo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 16:31:35 by greengo           #+#    #+#             */
/*   Updated: 2023/10/19 01:49:55 by greengo          ###   ########.fr       */
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
}