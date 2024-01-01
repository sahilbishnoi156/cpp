#include <iostream>
using namespace std;

void decimalToBinary(const int number){
    int n = number;
    int arr[31];
    int i = -1;
    int rem;
    while (n) {
        rem =  (n % 2);
        arr[++i] = rem;
        n = n >> 1;
    }
    
    while (i >= 0 )
    {
        cout << arr[i--];
    }
};

int main(int argc, char const *argv[])
{
    int num1 = 0b101;  // binary to decimal
    cout << num1<< endl;
    int num2 = 346325 ;
    decimalToBinary(num2);
    // cout << (5 << 2);
    
    return 0;
}
