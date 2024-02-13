/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sydauria <sydauria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 14:31:08 by sydauria          #+#    #+#             */
/*   Updated: 2024/02/13 13:26:04 by sydauria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Weapon.hpp"

class HumanB{
	private:
		std::string	name;
	public:
    	HumanB();
    	HumanB(const HumanB &toCopy);
    	HumanB &operator=(const HumanB &toCopy);
    	~HumanB();
	
		HumanB(std::string name);
		
		Weapon		*weapon;
		
		void	attack(void);
		void	setWeapon(Weapon &weapon);
};
