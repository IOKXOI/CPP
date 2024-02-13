/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sydauria <sydauria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 18:13:36 by greengo           #+#    #+#             */
/*   Updated: 2024/02/13 13:50:53 by sydauria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"
#include <iostream>


bool	containsNonPrintable(const std::string& str) {
    for (std::string::const_iterator it = str.begin(); it != str.end(); ++it) {
        if (!std::isprint(*it)) {
            return true;
        }
    }
    return false;
}

bool	containsNonDigit(const std::string& str) {
	for (std::string::const_iterator it = str.begin(); it != str.end(); ++it) {
		if (!std::isdigit(*it)) {
			return (true);
		}
	}
	return (false);
}

Contact::Contact() {}
Contact::~Contact() {}

bool	Contact::setter_first_name(void) {
	std::cout << "First name:" << std::endl;
	std::getline(std::cin, this->_first_name);
	if (std::cin.eof() || std::cin.fail())
		return 0;
	while (this->_first_name.empty() || containsNonPrintable(this->_first_name))
	{
		std::cout << "Invalid input, try again:" << std::endl;
		std::cout << "First name:" << std::endl;
		std::getline(std::cin, this->_first_name);
			if (std::cin.eof() || std::cin.fail())
		return 0;
	}
	return (1);
}

bool	Contact::setter_last_name(void) {
	std::cout << "Last name:" << std::endl;
	std::getline(std::cin, this->_last_name);
	if (std::cin.eof() || std::cin.fail())
		return 0;
	while (this->_last_name.empty() || containsNonPrintable(this->_last_name))
	{
		std::cout << "Invalid input, try again:" << std::endl;
		std::cout << "Last name:" << std::endl;
		std::getline(std::cin, this->_last_name);
			if (std::cin.eof() || std::cin.fail())
		return 0;
	}
	return (1);
}

bool	Contact::setter_nickname(void) {
	std::cout << "Nickname:" << std::endl;
	std::getline(std::cin, this->_nickname);
	if (std::cin.eof() || std::cin.fail())
		return 0;
	while (this->_nickname.empty() || containsNonPrintable(this->_nickname))
	{
		std::cout << "Invalid input, try again:" << std::endl;
		std::cout << "Nickname:" << std::endl;
		std::getline(std::cin, this->_nickname);
		if (std::cin.eof() || std::cin.fail())
			return 0;
	}
	return (1);
}

bool	Contact::setter_phone_number(void){
	std::cout << "Phone number:" << std::endl;
	std::getline(std::cin, this->_phone_number);
	if (std::cin.eof() || std::cin.fail())
		return 0;
	while (this->_phone_number.empty() || containsNonDigit(this->_phone_number))
	{
		std::cout << "Invalid input, try again:" << std::endl;
		std::cout << "Phone number:" << std::endl;
		std::getline(std::cin, this->_phone_number);
			if (std::cin.eof() || std::cin.fail())
		return 0;
	}
	return (1);
}

bool	Contact::setter_secret(void) {
	std::cout << "Darkest secret:" << std::endl;
	std::getline(std::cin, this->_secret);
	if (std::cin.eof() || std::cin.fail())
		return 0;
	while (this->_secret.empty() || containsNonPrintable(this->_secret))
	{
		std::cout << "Invalid input, try again:" << std::endl;
		std::cout << "Darkest secret:" << std::endl;
		std::getline(std::cin, this->_secret);
			if (std::cin.eof() || std::cin.fail())
		return 0;
	}
	
	return (1);
}

std::string	Contact::getter_first_name(void) {
	return (this->_first_name);
}

std::string	Contact::getter_last_name(void) {
	return (this->_last_name);
}

std::string	Contact::getter_nickname(void) {
	return (this->_nickname);
}

std::string	Contact::getter_phone_number(void) {
	return (this->_phone_number);
}

std::string	Contact::getter_secret(void) {
	return (this->_secret);
}
