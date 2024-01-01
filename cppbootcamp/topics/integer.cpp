#include <iostream>
#include <cstdint>
using namespace std;

int main(int argc, char const *argv[])
{
    int a = 2;
    cout << "size of datatype is : "<< sizeof(int) << endl;

    // int size will depend on your system
    // But if we want that that int take specific size in all systems then we can use a library;
    // int16_t a = 2;
    // cout << sizeof(a);

    // Converting binary to integer 
    // check pra3.cpp file for complete solution 
    int binary_number = 0b10101001;  // but you can use '0b' in front to convert in integer.
    int hex_number = 0x16;
    cout << hex_number;  // converting hexadecimal to decimal
    
    return 0;
}


