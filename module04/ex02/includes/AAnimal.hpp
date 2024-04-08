/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sydauria <sydauria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 17:22:18 by greengo           #+#    #+#             */
/*   Updated: 2024/04/08 09:40:00 by sydauria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>
#include <iostream>
#include <stdint.h>

class AAnimal {
	public:
		AAnimal();
		AAnimal(const AAnimal &toCopie);
		virtual ~AAnimal();

		AAnimal& operator=(const AAnimal &toCopie);

		std::string			getType() const;
		virtual void		makeSound() const = 0;

	protected:
		std::string type;

	private:
};

std::ostream &operator<<(std::ostream &os, AAnimal &AAnimal);
