/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: greengo <greengo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 19:27:58 by greengo           #+#    #+#             */
/*   Updated: 2023/10/18 12:03:05 by greengo          ###   ########.fr       */
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
    private:
        std::string _type;


};