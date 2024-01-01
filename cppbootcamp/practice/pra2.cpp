#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    string firstName;
    string lastName;
    cout << "Enter your name: "; 
    cin >> firstName >> lastName;  // this should be a good approach here.
    // getline(cin, firstName);
    // getline(cin, lastName);
    cout << "First name is : " << firstName << endl << "Last name is : " << lastName;
    return 0;
}

