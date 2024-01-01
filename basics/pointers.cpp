#include <iostream>

using namespace std;
int main(int argc, char const *argv[])
{
    // Pointers
    int a = 23;
    int* ptr = &a;
    cout << (*ptr) << endl;
    return 0;
}
