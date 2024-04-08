/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sydauria <sydauria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 17:49:52 by greengo           #+#    #+#             */
/*   Updated: 2024/04/08 09:40:23 by sydauria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog: public AAnimal{
	public:
		Dog();
		Dog(const Dog &toCopie);
		virtual ~Dog();  
		Dog& operator=(const Dog &toCopie);

		virtual void	makeSound() const;
		Brain*			get_brain();

	private:
		Brain *_brain;
};

std::ostream &operator<<(std::ostream &os, Dog &AAnimal);
