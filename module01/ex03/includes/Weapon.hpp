/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: greengo <greengo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 14:13:47 by sydauria          #+#    #+#             */
/*   Updated: 2023/10/19 09:04:18 by greengo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>

class Weapon {
	public:
    Weapon();
    Weapon(const Weapon &toCopy);
    Weapon &operator=(const Weapon &toCopy);
	~Weapon(void);
    
	Weapon(std::string type);
	const std::string 	&getType() const;
	void		    	setType(std::string type);

	private:
	std::string		_type;
};
