/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: greengo <greengo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 15:23:20 by greengo           #+#    #+#             */
/*   Updated: 2023/10/18 12:25:21 by greengo          ###   ########.fr       */
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

        virtual void learnMateria(AMateria *toCopy);
        virtual AMateria* createMateria(std::string const &type);        
    private:
        AMateria *_spellsLearned[4];
};
