#include "iostream"
#include "cmath"
int main(void)
{
    float a = 1234.4321f;

    int b = roundf((int)a << 8);

    std::cout << ((float)b) << std::endl;
}