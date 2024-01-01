#include <iostream>

template<typename customDatatype>

customDatatype addMe(customDatatype a, customDatatype b){
    return (a+b);
}

int main(int argc, char const *argv[])
{
    float a=1, b=2;
    std::cout << addMe(a,b);
    return 0;
}
