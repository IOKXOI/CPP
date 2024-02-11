/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: greengo <greengo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 04:10:33 by greengo           #+#    #+#             */
/*   Updated: 2023/11/13 16:59:24 by greengo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>
#include <stdint.h>
#include <iostream>


class ClapTrap {
    public:
        ClapTrap();
        ClapTrap(const ClapTrap &toCopy);
        ClapTrap& operator=(const ClapTrap &toCopy);
        virtual ~ClapTrap();  
        
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);  
        std::string getName() const;
        uint8_t     getAttack() const;
        uint8_t     getEnergy() const;
        uint8_t     getHp() const;
        void        setAttackDamage(uint8_t amount);
        ClapTrap(std::string name);        
    private:
        std::string _name;
        uint32_t     _hp;
        uint32_t     _energy;
        uint32_t     _attack;

};