/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: greengo <greengo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 14:22:23 by sydauria          #+#    #+#             */
/*   Updated: 2023/10/19 10:17:10 by greengo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include "Weapon.hpp"

class HumanA {
	public:
        HumanA();
        HumanA(const HumanA &toCopy);
        HumanA &operator=(const HumanA &toCopy);
		~HumanA();
		
		HumanA(std::string name, Weapon &weapon);
		
		std::string	name;
		Weapon		&weapon;
		void	attack(void);
		
	private:
};
