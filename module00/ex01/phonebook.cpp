/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: greengo <greengo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 17:50:59 by greengo           #+#    #+#             */
/*   Updated: 2023/10/01 14:03:18 by greengo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"
#include <iomanip> //for std::setw();
#include <string> //for std::stoi

PhoneBook::PhoneBook() : lastest_add(0) {}
PhoneBook::~PhoneBook() {}


bool PhoneBook::add() {
	std::cout << "\033[0;33mPlease fill following informations:\033[0m" << std::endl;
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
	PhoneBook::_list_contact();
	while (!PhoneBook::_userAnswer())
		std::cout << "\033[0;31mChoose a valid input\033[0m" << std::endl;
	return (1);
}


void	PhoneBook::_list_contact() {
	std::cout << std::setw(44) << "\033[0;33mChoose witch contact you want to display\033[0m" << std::endl;
	std::cout << std::setw(10) << "INDEX" << "|";
	std::cout << std::setw(10) << "FIRST NAME" << "|";
	std::cout << std::setw(10) << "LAST  NAME" << "|";
	std::cout << std::setw(10) << "NICKNAME" << "|";
	std::cout << std::setw(10) << std::endl;
	for (int id = 0; id < 8; id++)
	{
		if (_contact_Array[id].getter_first_name().empty())
			break;
		std::cout << std::setw(10) << id << "|";
		std::cout << std::setw(10) << _trunc_contact(_contact_Array[id].getter_first_name()) << "|";
		std::cout << std::setw(10) << _trunc_contact(_contact_Array[id].getter_last_name()) << "|";
		std::cout << std::setw(10) << _trunc_contact(_contact_Array[id].getter_nickname()) << "|";
		std::cout << std::endl;
	}
}

bool	PhoneBook::_userAnswer() {
	std::cout << "\033[0;33mEnter the index of contact\033[0m" << std::endl;
	std::string	userInput;
	std::getline(std::cin, userInput);
	int	id = this->_input_to_id(userInput);
	if (id >= 0 && !_contact_Array[id].getter_first_name().empty())
	{
		std::cout << std::setw(44) << "\033[0;33mFirst Name: \033[0m" << _contact_Array[id].getter_first_name() << std::endl;
		std::cout << std::setw(44) << "\033[0;33mLast Name: \033[0m" << _contact_Array[id].getter_last_name() << std::endl;
		std::cout << std::setw(44) << "\033[0;33mNickname: \033[0m" << _contact_Array[id].getter_nickname() << std::endl;
		std::cout << std::setw(44) << "\033[0;33mPhone Number: \033[0m" << _contact_Array[id].getter_phone_number() << std::endl;
		std::cout << std::setw(44) << "\033[0;33mDarkest Secret: \033[0m" << _contact_Array[id].getter_secret() << std::endl;
		return (1);
	}
	else if (_contact_Array[id].getter_first_name().empty()) {
		std::cout << "No data for this selection." << std::endl;
	}
	else {
		return (0);
	}
}

std::string	PhoneBook::_trunc_contact(std::string str) {
	if (str.size() > 10) 
		return (str.substr(0, 9) + ".");
	return (str);
}

int	PhoneBook::_input_to_id(std::string str) {
	if (str == "0")
		return (0);
	else if (str == "1")
		return (1);
	else if (str == "2")
		return (2);
	else if (str == "3")
		return (3);
	else if (str == "4")
		return (4);
	else if (str == "5")
		return (5);
	else if (str == "6")
		return (6);
	else if (str == "7")
		return (7);
	else
		return (-1);
}
