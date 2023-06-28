/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sydauria <sydauria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 12:46:29 by sydauria          #+#    #+#             */
/*   Updated: 2023/06/28 13:27:03 by sydauria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int main(void) {
	std::string		str("HI THIS IS BRAIN");
	std::string*	stringPTR = &str;
	std::string&	stringREF = str;

	std::cout << *stringPTR << std::endl;
	std::cout << stringREF << std::endl;

	std::cout << stringPTR << std::endl;
	std::cout << &stringREF << std::endl;
}
