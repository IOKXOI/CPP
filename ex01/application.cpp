/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   application.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: greengo <greengo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 10:22:40 by greengo           #+#    #+#             */
/*   Updated: 2023/06/15 20:15:08 by greengo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>
#include <cstring>
#include "phonebook.hpp"

int	main(int argc, char *argv[])
{
	std::string	userInput;
	PhoneBook	Interface;

	while (true) {
		std::cout << "yo" << std::endl;
		std::cout << "yo" << std::endl;
		std::cout << "What would you like to do? [ADD] [SEARCH] [EXIT]" << std::endl;
		std::cin >> userInput;
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
