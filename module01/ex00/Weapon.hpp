/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: greengo <greengo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 14:13:47 by sydauria          #+#    #+#             */
/*   Updated: 2023/07/05 14:08:55 by greengo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <string>
#include <iostream>

class Weapon {
	public:
	Weapon(std::string name);
	~Weapon(void);
	std::string 	getType(void);
	void			setType(std::string type);

	private:
	std::string		_type;
};

# endif
