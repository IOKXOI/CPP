/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sydauria <sydauria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 17:49:52 by greengo           #+#    #+#             */
/*   Updated: 2024/04/08 01:23:12 by sydauria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Animal.hpp"

class Cat: public Animal{
	public:
		Cat();
		Cat(const Cat &toCopie);
		~Cat();

		Cat& operator=(const Cat &toCopie);

		void	makeSound() const;

	private:
};

std::ostream &operator<<(std::ostream &os, Cat &Animal);
