/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: greengo <greengo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 19:53:28 by greengo           #+#    #+#             */
/*   Updated: 2023/10/17 19:53:35 by greengo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ICharacter.hpp"

class Character: public ICharacter{
    public:
        Character();
        Character(const Character &toCopy);
        Character& operator=(const Character &toCopy);
        virtual ~Character();   

        Character(std::string name);
        virtual std::string const &getName() const;
        virtual void equip(AMateria* materia);
        virtual void unequip(uint8_t idx);
        virtual void use(int idx, ICharacter &target);   
    private:
        std::string _name;
        std::string _type;
        AMateria    *_inventory[4];

};