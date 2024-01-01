#include <iostream>
using namespace std;

enum Week : char {  // putting colon to describe the type of attributes
    sunday,
    monday, 
    tuesday,
    wednesday,
    thursday,
    friday,
    saturday
};

int main(int argc, char const *argv[])
{
    cout << sizeof(sunday);

    // using enum attributes if they are int
    // for (int i = 0; i <= saturday; i++)
    // {
    //     cout << i << " ";
    // }
    
    return 0;
}
