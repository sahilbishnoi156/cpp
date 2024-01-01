#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    []{cout << "Hello LearnCodeOnline.in\n";}();  // using lambda 
    []{return 100;};  // using lambda with return

    // using lambda if we don't want to us  e a function
    auto sum = [](auto a, auto b){return a + b; };  // now we can use it like a function

    cout << "Sum of 4 and 5 is : " << sum(5,4);
    return 0;
}
