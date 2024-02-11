/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: greengo <greengo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 10:34:17 by greengo           #+#    #+#             */
/*   Updated: 2023/10/26 21:51:24 by greengo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string> 
#include <iostream>
#include <fstream>

int main(int argc, char** argv) {
    if (argc != 4) {
        std::cout << "Invalid parameters" << std::endl;
        return (1);
    }
    std::ifstream file(argv[1]);
    if (file.fail()) {
        std::cout << ("Open error: Cannot open ") << std::string(argv[1]) << std::endl;
        exit(1);
    }
    std::string     destinationName((std::string)argv[1] + ".replace");
    std::ofstream   destination(destinationName);
    if (destination.fail()) {
        std::cout << ("Open error: Cannot open ") << destinationName << std::endl;
        exit(1);
    }
    std::string expression2(argv[2]);
    std::string expression1(argv[3]);
    while ()

}