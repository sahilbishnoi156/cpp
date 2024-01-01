#include <iostream>
#include <string>

using namespace std;

void reverse(string &s, int start, int end){
    while(start < end){
        swap(s[start], s[end]);
        start++;
        end--;
    }
}

void leftRotate(string &s, int d){
    reverse(s, 0, d - 1);
    reverse(s, d, s.length() - 1);
    reverse(s, 0, s.length() - 1);
}
void rightRotate(string &s, int d){
    reverse(s, s.length() - d, s.length()-1);
    reverse(s, 0, s.length() - d -1);
    reverse(s, 0, s.length() - 1);
}

int main(int argc, char const *argv[])
{
    string s = "helloworld";
    rightRotate(s, 2);
    cout << s;
    return 0;
}