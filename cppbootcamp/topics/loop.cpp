#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    // modern for loop
    int arr[] = {1, 2, 3, 4, 5, 6};
    for (auto i : arr)  // auto is used when we don't know the datatype
    {
        cout << "value of element is: " << i << endl;
    }

    char name[] = {'s', 'a', 'h', 'i', 'l', '\0'};  // can use just 0 instead of '\0'
    printf("%s\n\n", name);

    cout << "Approach 2\n";

    for (char* ptr = name; *ptr != 0; ptr++)  // trying to iterate through array using pointer
    {
        cout << *ptr << endl;
    }

    cout << "Approach 3\n";

    for (auto i:name)  // trying to iterate through array using pointer
    {
        if (i == 0) break;
        cout << i << endl;
    }
    

    return 0;
}
