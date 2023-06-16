/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: greengo <greengo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 16:20:32 by greengo           #+#    #+#             */
/*   Updated: 2023/06/12 12:41:45 by greengo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "contact.hpp"
#include <iostream>

class   PhoneBook {
    public:
    PhoneBook();
    ~PhoneBook();
    
    bool    add();
    bool    search();

    private:
    Contact _contact_Array[8];
    int     lastest_add;
};