/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sydauria <sydauria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 22:36:40 by greengo           #+#    #+#             */
/*   Updated: 2024/04/08 10:40:38 by sydauria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ICharacter.hpp"
#include <string>
#include <iostream>

class ICharacter;

class AMateria {
	public:
		AMateria();
		AMateria(const AMateria &toCopy);
		AMateria& operator=(const AMateria &toCopy);
		virtual ~AMateria();   
			   
		AMateria(std::string const &type);
		std::string const &getType(void) const;
		void settype(std::string type);
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter &target);
	protected:
		std::string _type;
};
