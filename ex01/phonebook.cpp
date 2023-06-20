/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sydauria <sydauria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 17:50:59 by greengo           #+#    #+#             */
/*   Updated: 2023/06/20 19:05:34 by sydauria         ###   ########.fr       */
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
	std::cout << std::setw(10) << "Index" << "|";
	std::cout << std::setw(10) << "First Name" << "|";
	std::cout << std::setw(10) << "Last Name" << "|";
	std::cout << std::setw(10) << "Nickname" << "|";
	std::cout << std::endl;
	for (int id = 0; id < 8; id++)
	{
		if (_contact_Array[id].getter_first_name().empty())
			break;
		std::cout << std::setw(10) << id << "|";
		std::cout << std::setw(10) << _display_contact(_contact_Array[id].getter_first_name()) << "|";
		std::cout << std::setw(10) << _display_contact(_contact_Array[id].getter_last_name()) << "|";
		std::cout << std::setw(10) << _display_contact(_contact_Array[id].getter_nickname()) << "|";
		std::cout << std::endl;
	}
}

bool	PhoneBook::_userAnswer() {
	std::cout << std::setw(44) << "\033[0;33mEnter the index of contact\033[0m" << std::endl;
	std::string	userInput;
	std::getline(std::cin, userInput);
	if (!userInput.compare("0") || !userInput.compare("1") || !userInput.compare("2") || !userInput.compare("3") || !userInput.compare("4") || !userInput.compare("5") || !userInput.compare("6") || !userInput.compare("7")) {
		if (!_contact_Array[std::stoi(userInput, NULL, 10)].getter_first_name().empty()) {
			_contact_Array[std::stoi(userInput, NULL, 10)].display();
			return (1);
		}
	}
	return (0);
}



std::string	PhoneBook::_display_contact(std::string str) {
	if (str.size() > 10) 
		return (str.substr(0, 9) + ".");
	return (str);
}

