/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: greengo <greengo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 18:11:58 by greengo           #+#    #+#             */
/*   Updated: 2023/10/19 07:06:12 by greengo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>

class Zombie{
    public:
        Zombie();
        Zombie(const Zombie &toCopy);
        Zombie& operator=(const Zombie &toCopy);
        virtual ~Zombie();

        Zombie(std::string name);
        void    announce(void);
    private:
        std::string _name;
};

Zombie	*newZombie(std::string name);
void	randomChump(std::string name);
