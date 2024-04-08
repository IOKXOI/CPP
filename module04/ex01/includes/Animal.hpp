/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sydauria <sydauria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 17:22:18 by greengo           #+#    #+#             */
/*   Updated: 2024/04/08 06:58:27 by sydauria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>
#include <iostream>
#include <stdint.h>

class Animal {
	public:
		Animal();
		Animal(const Animal &toCopie);
		virtual ~Animal();

		Animal& operator=(const Animal &toCopie);

		std::string			getType() const;
		virtual void		makeSound() const;

	protected:
		std::string type;

	private:
};

std::ostream &operator<<(std::ostream &os, Animal &Animal);
