#include <iostream>
#include "adder.h"
int main(int argc, char const *argv[])
{
    float a = 3, b = 5;
    int c = 13, d = 7;

    // here we are using two function of same name to add both float and integer value using header file .
    std::cout << addme(a, b) << std::endl;
    std::cout << addme(c, d);
    return 0;
}
