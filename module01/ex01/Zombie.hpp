/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: greengo <greengo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 18:11:58 by greengo           #+#    #+#             */
/*   Updated: 2023/10/19 07:22:43 by greengo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>

class Zombie{
    public:
        Zombie();
        Zombie(std::string name);
        Zombie(const Zombie &toCopy);
        Zombie &operator=(const Zombie &toCopy);
        virtual ~Zombie();
        void    announce(void);

    private:
        std::string _name;
};

Zombie	*zombieHorde( int N, std::string name );
void	randomChump(std::string name);
Zombie	*zombieHorde( int N, std::string name );
void	destroyZombie(Zombie *thisZombie);

