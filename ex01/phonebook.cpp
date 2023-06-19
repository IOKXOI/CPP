/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sydauria <sydauria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 17:50:59 by greengo           #+#    #+#             */
/*   Updated: 2023/06/19 19:07:39 by sydauria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"
#include <iomanip> //for std::setw();

PhoneBook::PhoneBook() : lastest_add(0) {}
PhoneBook::~PhoneBook() {}


bool PhoneBook::add() {
	
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

bool PhoneBook::search() {
	for (int id = 0; id < 8; id++)
	{
		if (_contact_Array[id].getter_first_name().empty())
			break;
	std::cout << std::setw(10) << id << "|";
	std::cout << std::setw(10) << _contact_Array[id].getter_first_name() << "|";
	std::cout << std::setw(10) << _contact_Array[id].getter_last_name() << "|";
	std::cout << std::setw(10) << _contact_Array[id].getter_nickname() << "|";
	std::cout << std::endl;
	}
	return (1);
}
