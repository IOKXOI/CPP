#include "Array.hpp"
#include <iostream> 
#include <string>


class Hunter{
    public: 
        std::string name;
        Hunter() {};
        Hunter &operator=(const Hunter &toCopy) {
            if (this != &toCopy) {
                name = toCopy.name;
            }   
            return (*this);
        }
        ~Hunter(){};
};


int main( void ) {
    unsigned int n = 10;

    Array<int>Strasbourg(n);
    
    
    for (unsigned int i = 0; i < 10; i ++) {
        Strasbourg.setArrayElement(i, i);
        Strasbourg.accessElement(i);
    }
    
    std::cout << "Array is size of: " << Strasbourg.size() << std::endl;;
    
    Array<char>Montpellier;
    std::string content = "Montpellier";
    //Array<char>Montpellier(content.length());

    for (unsigned int i = 0; i < Montpellier.size(); i++){
        Montpellier.setArrayElement(content[i], i);
        Montpellier.accessElement(i);
    }





    Hunter Gon;
    Gon.name = "Gon";

    Hunter Killua;
    Killua.name = "Killua";

    Array<Hunter>Hunters(2);
    Hunters.setArrayElement(Gon, 0);
    Hunters.setArrayElement(Killua, 1);

    std::string name = Hunters.getElement(0).name;
    std::cout << name << "." << std::endl;
    std::cout << Hunters.getElement(1).name << std::endl;

    return 0; 
}

// #include "Array.hpp"
// #include <iostream>
// #include <string>
// #include <sstream>

// int main(void) {
// 	Array<int> intArray(5);
// 	Array<std::string> stringArray(5);
// 	for (unsigned int i = 0; i < intArray.size(); i++)
// 		intArray[i] = i;
// 	for (unsigned int i = 0; i < stringArray.size(); i++)
// 	{
// 		std::ostringstream convert;
// 		convert << i;
// 		stringArray[i] = convert.str();
// 	}
// 	std::cout << "intArray: ";
// 	for (unsigned int i = 0; i < intArray.size(); i++)
// 		std::cout << intArray[i] << " ";
// 	std::cout << std::endl;
// 	std::cout << "stringArray: ";
// 	for (unsigned int i = 0; i < stringArray.size(); i++)
// 		std::cout << stringArray[i] << " ";
// 	std::cout << std::endl;
// 	try {
// 		std::cout << "intArray[5]: " << intArray[5] << std::endl;
// 	}
// 	catch (std::exception& e) {
// 		std::cout << "Exception: " << e.what() << std::endl;
// 	}
// }