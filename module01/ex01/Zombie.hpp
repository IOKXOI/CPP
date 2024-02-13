/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sydauria <sydauria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 18:11:58 by greengo           #+#    #+#             */
/*   Updated: 2024/02/13 13:41:32 by sydauria         ###   ########.fr       */
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

