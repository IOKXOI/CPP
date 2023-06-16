/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: greengo <greengo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 17:50:59 by greengo           #+#    #+#             */
/*   Updated: 2023/06/15 20:11:54 by greengo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

PhoneBook::PhoneBook() : lastest_add(0) {}
PhoneBook::~PhoneBook() {}

bool PhoneBook::add() {
    
    lastest_add = 0;
    std::cout << "Please fill following informations:" << std::endl;
    if (!_contact_Array[lastest_add].setter_first_name())
        return (1);
    if (!_contact_Array[lastest_add].setter_last_name())
        return (2);
    if (!_contact_Array[lastest_add].setter_nickname())
        return (3);
    if (!_contact_Array[lastest_add].setter_phone_number())
        return (4);
    if (!_contact_Array[lastest_add].setter_secret())
        return (5);
    lastest_add++;
    if (lastest_add == 8)
        lastest_add = 0;
    return (0);
}

/* bool PhoneBook::search() {
    int i = 0;
    while (_contact_Array[i].getter_first_name)
    {
        
    }
}
 */
