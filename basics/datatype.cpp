# include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    // use camelCase Notation to declare variable name
    int variableOne;  // integer takes 4byte
    long variableTwo; // long takes 4byte
    long long variableFour;  // take 8byte
    short variableThree;  // short takes 2byte

    float var1;  // takes 4byte
    double var2;  // takes 8byte
    long double var3;  // takes 12byte

    int const var4=1;  // const variable requires an initializer, it can't be empty
    string b="this is string datatype"; 
    // Taking user input
    int a, b;
    cout<<"Enter the value of a & b :-"<<endl;
    cin>>a;
    getchar();
    cin>>b;
    cout<<"value of a is: "<<a<<endl<<"Value of b is: "<<b<<endl;
    return 0;
}
