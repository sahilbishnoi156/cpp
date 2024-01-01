#include <iostream>
#include <string>
using namespace std;

void swap(int &a, int &b)
{
    // swap a and b using temporary variable
    int temp = move(a);
    a = move(b);
    b = move(temp);
}


string getMe(){
    return "Hey\n";
};

int main(int argc, char const *argv[])
{
    // Instead of creating new variable and give it separate we can move that variable in another memory space
    // like in swap 2 value program instead making new temp variable we can move this to a reference
    int a = 3;
    int b = 4;
    cout << a << b << endl;
    swap(a, b);
    cout << a << b << endl;


    string s1 = getMe();  // here we are copying the function value means we have to reference
    string&& s2 = getMe();  // here by using move semantics s is holding the reference of getMe() instead of creating 
    cout << s1 << s2;
    return 0;
}
