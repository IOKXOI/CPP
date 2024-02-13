#include "Harl.hpp"
#include <iostream>

int main(void)
{
    Harl K;
    K.complainFilter("debug");
    std::cout << std::endl;
    K.complainFilter("");
    std::cout << std::endl;
    K.complainFilter("info");
    std::cout << std::endl;
    K.complainFilter("warning");
    std::cout << std::endl;
    K.complainFilter("error");
    std::cout << std::endl;
    K.complainFilter("eh");
}
