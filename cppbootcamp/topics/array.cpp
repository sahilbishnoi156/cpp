#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int arr[4] = {1,2,3,4};
    cout << (*arr) << endl;
    cout << arr[4] << endl;

    int* ptr = arr;
    cout << ptr[2];
    return 0;
}
