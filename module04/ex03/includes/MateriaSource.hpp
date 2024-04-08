/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sydauria <sydauria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 15:23:20 by greengo           #+#    #+#             */
/*   Updated: 2024/04/08 10:39:24 by sydauria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "IMateriaSource.hpp"

class MateriaSource: public IMateriaSource{
	public:
		MateriaSource();
		MateriaSource(const MateriaSource &toCopy);
		MateriaSource& operator=(const MateriaSource &toCopy);
		virtual ~MateriaSource();  

		void learnMateria(AMateria *toCopy);
		AMateria* createMateria(std::string const &type);        
};
