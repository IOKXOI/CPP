/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sydauria <sydauria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 04:11:27 by greengo           #+#    #+#             */
/*   Updated: 2024/04/08 00:29:43 by sydauria         ###   ########.fr       */
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
        ClapTrap(std::string name);
        
        virtual void attack(const std::string& target);
        void        takeDamage(unsigned int amount);
        void        beRepaired(unsigned int amount);  
        std::string getName() const;
        uint32_t    getAttack() const;
        uint32_t    getEnergy() const;
        int32_t     getHp() const;
        void        setAttackDamage(uint32_t amount);

    protected:
        std::string _name;
        int32_t     _hp;
        int32_t     _energy;
        uint32_t    _attack;

};
