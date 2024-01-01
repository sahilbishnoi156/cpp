#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int *ptr;

    try
    {
        ptr = new int[100]; // forcefully allocation memory this may give error
        cout << "Memory space allocated\n";
        // throw 4;  // To throw error
    }
    catch (...)
    {
        cout << "Error while allocating memory\n";
    }

    delete[] ptr; // to delete the space of array
    // delete ptr;  // if pointer contains single value
    return 0;
}
