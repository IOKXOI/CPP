/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sydauria <sydauria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 17:49:52 by greengo           #+#    #+#             */
/*   Updated: 2024/04/08 07:03:48 by sydauria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Animal.hpp"
#include "Brain.hpp"

class Cat: public Animal{
	public:
		Cat();
		Cat(const Cat &toCopie);
		virtual Cat& operator=(const Cat &toCopie);
		virtual ~Cat();  
		
		void 		makeSound() const;
		void 		setIdea(const std::string idea);

	private:
		Brain* _brain;
};

std::ostream &operator<<(std::ostream &os, Cat &Animal);
