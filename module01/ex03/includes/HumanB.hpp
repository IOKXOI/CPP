/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: greengo <greengo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 14:31:08 by sydauria          #+#    #+#             */
/*   Updated: 2023/10/19 09:35:59 by greengo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Weapon.hpp"

class HumanB{
	public:
    HumanB();
    HumanB(const HumanB &toCopy);
    HumanB &operator=(const HumanB &toCopy);
    ~HumanB();
    
	HumanB(std::string name);
	
	std::string	name;
	Weapon		*weapon;
	
	void	attack(void);
	void	setWeapon(Weapon &weapon);

	private:
};
