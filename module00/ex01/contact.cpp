/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sydauria <sydauria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 18:13:36 by greengo           #+#    #+#             */
/*   Updated: 2023/06/21 14:27:49 by sydauria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"
#include <iostream>

Contact::Contact() {}
Contact::~Contact() {}

	bool	Contact::setter_first_name(void) {
		std::cout << "First name:" << std::endl;
		std::getline(std::cin, this->_first_name);
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

	bool	Contact::setter_last_name(void) {
		std::cout << "Last name:" << std::endl;
		std::getline(std::cin, this->_last_name);
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

	bool	Contact::setter_nickname(void) {
		std::cout << "Nickname:" << std::endl;
		std::getline(std::cin, this->_nickname);
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

	bool	Contact::setter_phone_number(void){
		std::cout << "Phone number:" << std::endl;
		std::getline(std::cin, this->_phone_number);
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
	
	bool	Contact::setter_secret(void) {
		std::cout << "Darkest secret:" << std::endl;
		std::getline(std::cin, this->_secret);
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
