/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sydauria <sydauria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 14:13:47 by sydauria          #+#    #+#             */
/*   Updated: 2023/06/28 14:41:25 by sydauria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <string> 

class Weapon {
	public:
	Weapon(void);
	~Weapon(void);
	std::string& 	getType(void);
	void			setType(std::string type);

	private:
	std::string		_type;
}
#endif
