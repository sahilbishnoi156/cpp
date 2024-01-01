#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const *argv[])
{
    string color;
    printf("Enter your fav. color.\n");
    getline(cin, color);  // can take input after white space too.
    // cin >> color; // will not input after white space
    cout << "hey! " << color << " is my fav. too." << endl;
    return 0;
}
