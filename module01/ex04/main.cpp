/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sydauria <sydauria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 10:34:17 by greengo           #+#    #+#             */
/*   Updated: 2024/02/13 13:22:53 by sydauria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string> 
#include <iostream>
#include <fstream>

void replaceOccurrences(std::string& str, const std::string& s1, const std::string& s2) {
    size_t pos = 0;
    while ((pos = str.find(s1, pos)) != std::string::npos) {
        str.erase(pos, s1.length());
        str.insert(pos, s2);
        pos += s2.length();
    }
}

int main(int argc, char** argv) {
    if (argc != 4) {
        std::cout << "Invalid parameters" << std::endl;
        return (1);
    }
    std::string s1(argv[2]);
    if (s1.empty())
        return (std::cout << "Invalid first word to search.", 1);
    std::string s2(argv[3]);
    if (s2.empty())
        return (std::cout << "Invalid second word to search.", 1);
    std::ifstream oldFile(argv[1]);
    if (oldFile.fail()) {
        std::cout << ("Open error: Cannot open ") << std::string(argv[1]) << std::endl;
        return(1);
    }
    std::string     destinationName((std::string)argv[1] + ".replace");
    std::ofstream   newFile(destinationName.c_str());
    if (newFile.fail()) {
        std::cout << ("Open error: Cannot open ") << destinationName << std::endl;
        return(1);
    }
    std::string line;
    while (std::getline(oldFile, line)) {
        replaceOccurrences(line, s1, s2);
        newFile << line << std::endl;
    }
	oldFile.close();
	newFile.close();
}
