/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sydauria <sydauria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 14:22:23 by sydauria          #+#    #+#             */
/*   Updated: 2023/06/28 14:37:42 by sydauria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <string>

class HumanA {
	public:
	HumanA(Weapon* Weapon);
	~HumanA();
	const std::string	name;
	std::string& Weapon;
	void	attack(void);

	private:

}

#endif
