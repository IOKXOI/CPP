/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: greengo <greengo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 18:13:36 by greengo           #+#    #+#             */
/*   Updated: 2023/06/18 17:45:25 by greengo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"
#include <iostream>

Contact::Contact() {}
Contact::~Contact() {}

	bool    Contact::setter_first_name(void) {
		std::cout << "First name:" << std::endl;
		std::cin >> this->_first_name;
		if (this->_first_name.empty())
			return (0);
		return (1);
		/*while (this->_first_name.empty())
		{
			std::cout << "Invalid input, try again:" << std::endl;
			std::cout << "First name:" << std::endl;
			std::cin.get();
			std::cin >> this->_first_name;
		} */
	}

	bool    Contact::setter_last_name(void) {
		std::cout << "Last name:" << std::endl;
		std::cin >> this->_last_name;
		if (this->_last_name.empty())
			return (0);
		/* while (this->_last_name.empty())
		{
			std::cout << "Invalid input, try again:" << std::endl;
			std::cout << "Last name:" << std::endl;
			std::cin.clear();
			std::cin.ignore();
			std::cin >> this->_last_name;
		} */
		return (1);
	}

	bool    Contact::setter_nickname(void) {
		std::cout << "Nickname:" << std::endl;
		std::cin >> this->_nickname;
		if (this->_nickname.empty())
			return (0);
		/* while (this->_nickname.empty())
		{
			std::cout << "Invalid input, try again:" << std::endl;
			std::cout << "Nickname:" << std::endl;
			std::cin >> this->_nickname;
		} */
		return (1);
	}

	bool    Contact::setter_phone_number(void){
		std::cout << "Phone number:" << std::endl;
		std::cin >> this->_phone_number;
		/* while (this->_phone_number.empty())
		{
			std::cout << "Invalid input, try again:" << std::endl;
			std::cout << "Phone number:" << std::endl;
			std::cin >> this->_phone_number;
		} */
		if (this->_phone_number.empty())
			return (0);
		return (1);
	}
	
	bool    Contact::setter_secret(void) {
		std::cout << "Darkest secret:" << std::endl;
		std::cin >> this->_secret;
		if (this->_secret.empty())
			return (0);
		/* while (this->_secret.empty())
		{
			std::cout << "Invalid input, try again:" << std::endl;
			std::cout << "Darkest secret:" << std::endl;
			std::cin >> this->_secret;
		} */
		
		return (1);
	}

	char    *Contact::getter_first_name(void) {
		return (this._first_name);
	}