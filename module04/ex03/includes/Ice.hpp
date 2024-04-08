/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sydauria <sydauria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 14:48:23 by greengo           #+#    #+#             */
/*   Updated: 2024/04/08 10:57:25 by sydauria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AMateria.hpp"

class Ice : public AMateria{
	public:
		Ice();
		Ice(const Ice &toCopy);
		Ice& operator=(const Ice &toCopy);
		virtual ~Ice();
		
		virtual std::string const &getType(void) const;         
		virtual AMateria* clone() const;
		virtual void use(ICharacter &target);
};
