/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: greengo <greengo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 14:31:08 by sydauria          #+#    #+#             */
/*   Updated: 2023/07/05 14:08:44 by greengo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class HumanB{
	public:
	HumanB(std::string name);
	~HumanB(void);
	
	const std::string	name;
	Weapon				*weapon;
	
	void	attack(void);
	void	setWeapon(Weapon &weapon);

	private:
	
};

#endif
