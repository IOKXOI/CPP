/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sydauria <sydauria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 19:10:56 by greengo           #+#    #+#             */
/*   Updated: 2024/04/08 09:41:40 by sydauria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal{
	public:
		WrongCat();
		WrongCat(const WrongCat &toCopie);
		~WrongCat();

		WrongCat& operator=(const WrongCat &toCopie);

		void			makeSound() const;

	private:
};

std::ostream &operator<<(std::ostream &os, WrongCat &AAnimal);
