#include "Array.hpp"
#include "easyfind.hpp"
#include <iostream> 

int main( void ) {
    // unsigned int n = 10;
    // std::getline(std::cin, userInput);
	// if (std::cin.eof() || std::cin.fail())
	// 	return 0;

    std::vector<int> Strasbourg;
    Strasbourg.push_back(1);
    Strasbourg.push_back(2);
    Strasbourg.push_back(3);
    Strasbourg.push_back(4);
    Strasbourg.push_back(5);

    try {
        std::cout << easyfind(Strasbourg, 6) << std::endl;
    }
    catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    return 0; 
}
