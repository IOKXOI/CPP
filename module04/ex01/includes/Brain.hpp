/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: greengo <greengo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 16:52:25 by greengo           #+#    #+#             */
/*   Updated: 2023/09/28 10:46:48 by greengo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>
#include <stdint.h>

class Brain {
    public:
        Brain();
        Brain(const Brain &toCopie);
        Brain& operator=(const Brain &toCopie);
        ~Brain();

        std::string ideas[100];
        //        
        void setIdea(const std::string idea);
        std::string getIdea(uint8_t ideaIndex);
        //
    private:
};