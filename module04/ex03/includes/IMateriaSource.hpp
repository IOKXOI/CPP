/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: greengo <greengo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 15:00:10 by greengo           #+#    #+#             */
/*   Updated: 2023/10/17 15:03:55 by greengo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AMateria.hpp"

class IMateriaSource {
	public:
		virtual ~IMateriaSource() {};  
		virtual void learnMateria(AMateria *toCopy) = 0;
		virtual AMateria* createMateria(std::string const &type) = 0;

	protected:
		AMateria *_spellsLearned[4];
};
