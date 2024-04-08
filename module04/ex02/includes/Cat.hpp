/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sydauria <sydauria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 17:49:52 by greengo           #+#    #+#             */
/*   Updated: 2024/04/08 09:42:38 by sydauria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat: public AAnimal{
	public:
		Cat();
		Cat(const Cat &toCopie);
		virtual Cat& operator=(const Cat &toCopie);
		virtual ~Cat();  
		
		void 		makeSound() const;

	private:
		Brain* _brain;
};

std::ostream &operator<<(std::ostream &os, Cat &AAnimal);
