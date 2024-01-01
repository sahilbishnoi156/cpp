#include <iostream>
using namespace std;

int myFunc();
int main(int argc, char const *argv[])
{
    int a=0;
    while (a<3)
    {
        myFunc();
        a++;
    }
    
    return 0;
}

int myFunc(){
    cout<<"This is a function!\n";
}