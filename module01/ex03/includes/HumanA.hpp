/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sydauria <sydauria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 14:22:23 by sydauria          #+#    #+#             */
/*   Updated: 2024/02/13 13:24:37 by sydauria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include "Weapon.hpp"

class HumanA {
	private:
		std::string	name;
	public:
        HumanA();
        HumanA(const HumanA &toCopy);
        HumanA &operator=(const HumanA &toCopy);
		~HumanA();
		
		HumanA(std::string name, Weapon &weapon);
		
		Weapon		&weapon;
		void	attack(void);
		
};
