/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sydauria <sydauria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 14:13:47 by sydauria          #+#    #+#             */
/*   Updated: 2024/02/13 13:12:28 by sydauria         ###   ########.fr       */
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
