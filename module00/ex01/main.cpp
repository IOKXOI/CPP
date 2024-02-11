/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sydauria <sydauria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 10:22:40 by greengo           #+#    #+#             */
/*   Updated: 2024/02/11 15:43:06 by sydauria         ###   ########.fr       */
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
		std::cout << "What would you like to do? [ADD] [SEARCH] [EXIT]" << std::endl;
		std::getline(std::cin, userInput);
		if (userInput == "ADD" || userInput == "add")
			Interface.add();	
		else if (userInput == "SEARCH" || userInput == "search")
			Interface.search();
		else if (userInput == "EXIT" || userInput == "exit")
			return (0);
	}
	(void)argc;
	(void)argv;
}
