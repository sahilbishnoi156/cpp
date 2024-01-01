#include <iostream>
using namespace std;

int reverse(int n){
    int temp = 0;
    while (n){
        temp = temp * 10 + n % 10;
        n /= 10;
    };  
    return temp;
};

int main(int argc, char const *argv[])
{
    int n = 123;
    cout << reverse(n);
    return 0;
}
