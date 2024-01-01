#include <iostream>

int factorial(int n){
    if (n == 1){
        return 1;
    }
    return n * factorial(n-1) ;  
}

int main(int argc, char const *argv[])
{
    int n = -3;
    n > 0 ? std::cout << factorial(n) : std::cout << "Invalid input";;
    return 0;
}
