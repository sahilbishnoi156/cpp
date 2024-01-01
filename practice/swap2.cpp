#include <iostream>
using namespace std;

void swap(int &a, int &b){
    //swap a and b using temporary variable
    int temp = a;
    a = b;
    b = temp;
}
int main(int argc, char const *argv[])
{
    int a = 3;
    int b = 4;
    cout << a << b << endl;
    swap(a,b);
    cout << a << b << endl;
    return 0;
}
