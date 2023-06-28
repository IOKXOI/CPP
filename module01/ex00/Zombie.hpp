/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sydauria <sydauria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 18:11:58 by greengo           #+#    #+#             */
/*   Updated: 2023/06/28 10:56:53 by sydauria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>

class Zombie{
    public:
        Zombie(void);
        Zombie(std::string);
        ~Zombie(void);
        void    announce(void);

    private:
        std::string _name;
};

Zombie	*zombieHorde( int N, std::string name );

#endif
