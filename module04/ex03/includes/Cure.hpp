/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sydauria <sydauria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 19:27:58 by greengo           #+#    #+#             */
/*   Updated: 2024/04/08 10:37:14 by sydauria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AMateria.hpp"

class Cure: public AMateria {
	public:
		Cure();
		Cure(const Cure &toCopy);
		Cure& operator=(const Cure &toCopy);
		virtual ~Cure();    

		virtual std::string const &getType(void) const;         
		virtual AMateria* clone() const;
		virtual void use(ICharacter &target);
};
