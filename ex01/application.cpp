/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   application.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sydauria <sydauria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 10:22:40 by greengo           #+#    #+#             */
/*   Updated: 2023/06/16 12:25:08 by sydauria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>
#include <cstring>
#include <cstdio> // for clearerr()
#include "phonebook.hpp"

int	main(int argc, char *argv[])
{
	std::string	userInput;
	PhoneBook	Interface;

	while (true) {
		std::cout << "What would you like to do? [ADD] [SEARCH] [EXIT]" << std::endl;
		std::getline(std::cin, userInput);
		while (userInput.empty())
		{
			clearerr(stdin);
			std::cout << "Invalid input, try again:" << std::endl;
			std::getline(std::cin, userInput);
		}
		if (userInput == "ADD" || userInput == "add")
			Interface.add();
		//else if (userInput == "SEARCH")
		//	Interface.search();
		else if (userInput == "EXIT")
			return (0);
	}
	(void)argc;
	(void)argv;
}
