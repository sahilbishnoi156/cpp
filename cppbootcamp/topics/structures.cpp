#include <iostream>
using namespace std;

struct User
{
    const int uId;  // we can't change uId 
    const char *name;  // But we can change the user's name because const is pointer not the value of pointer
    const char *email;
    int course_count;
};

int main(int argc, char const *argv[])
{
    User mickey =  {0001, "mickey", "mickey@cartoon.com", 3};

    cout << mickey.name << endl;

    User *mickey_copy = &mickey;
    cout << mickey_copy->name << endl; // uses with pointer
    return 0;
}
