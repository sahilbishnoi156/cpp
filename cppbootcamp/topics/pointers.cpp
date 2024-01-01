#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int var = 3;
    int* ptr;
    ptr = &var;
    // writing (*ptr) is known as dereferencing
    cout << "address : " << ptr << endl << "value : " << *ptr << endl;
    return 0;
}
