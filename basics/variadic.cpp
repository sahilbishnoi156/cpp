#include <iostream> 
using namespace std;

template <typename cDT>

void func(cDT t){
    cout << t << endl;
};

template <typename cDT, typename... Args>  // its like spread operator
void func(cDT t, Args... args){  // here t will take first value and args will take other values
    cout<< t << endl;
    func(args...);  // using recursion to display the other values
}

int main(int argc, char const *argv[])
{
    // if we want to pass multiple values in functions but we don't know many then we can use variadic template
    func(1,"plus", 2, "is", "equal", "to", 3.0, 'd');  // printing all values using variadic template and function
    return 0;
}
