#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    // Loops
    // while loop
    cout<<"While loop\n";
    int a=0;
    while (a<=5){
        cout<<a<<endl;
        a++;
    }

    // for loop
    cout<<"For loop\n";
    for (int i = 0; i < 5; i++)
    {
        cout<<i<<endl;
    }
    
    // do while
    cout<<"Do while\n";
    do  // Runs at least once weather the condition is true or not.
    {
        cout<<a<<endl;
    } while (a<5);
    
    return 0;
}
