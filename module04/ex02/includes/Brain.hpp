/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: greengo <greengo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 16:52:25 by greengo           #+#    #+#             */
/*   Updated: 2023/10/18 02:10:19 by greengo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>
#include <stdint.h>

class Brain {
    public:
        Brain();
        Brain(const Brain &toCopy);
        Brain& operator=(const Brain &toCopy);
        virtual ~Brain();

        std::string ideas[100];
        //        
        void setIdea(const std::string idea);
        std::string getIdea(uint8_t ideaIndex);
        //
    private:
};