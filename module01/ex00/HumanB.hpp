/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sydauria <sydauria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 14:31:08 by sydauria          #+#    #+#             */
/*   Updated: 2023/06/28 14:37:53 by sydauria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class HumanB{
	public:
	HumanB(Weapon	*weapon);
	const std::string	name;
	Weapon	weapon;
	void	attack(void);

	private:
	
}

#endif
