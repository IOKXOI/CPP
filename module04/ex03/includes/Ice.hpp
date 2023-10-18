/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: greengo <greengo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 14:48:23 by greengo           #+#    #+#             */
/*   Updated: 2023/10/18 02:10:42 by greengo          ###   ########.fr       */
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
    private:
        std::string _type;
};
