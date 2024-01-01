#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int age;
    cout<<"Enter your age:-\n";
    cin>>age;

    // if else ladder
    if (age == 18){
        cout<<"You can drive!\n";
    }
    else if(age <18){
        cout<<"You can't drive!\n";
    }
    else{
        cout<<"You can drive!\n";
    }

    // switch case

    switch (age)
    {
    case 18:
        cout<<"age is: "<<age;
        break;
    
    case 17:
        cout<<"age is: "<<age;
        break;
    
    default:
        cout<<"age is: "<<age;
        break;
    }
    return 0;
}
