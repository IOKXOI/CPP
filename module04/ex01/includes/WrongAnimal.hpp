/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sydauria <sydauria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 18:36:46 by greengo           #+#    #+#             */
/*   Updated: 2024/04/08 02:50:22 by sydauria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>
#include <iostream>

class WrongAnimal {
	public:
		WrongAnimal();
		WrongAnimal(const WrongAnimal &toCopie);
		~WrongAnimal(); 

		WrongAnimal& operator=(const WrongAnimal &toCopie);
		
		std::string		getType () const;
		virtual void	makeSound() const;

	protected: 
		std::string type;

	private:
};
