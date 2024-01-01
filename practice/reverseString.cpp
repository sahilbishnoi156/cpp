#include <iostream>
#include <string>
using namespace std;

void reverse(string &s){
    int n = (s.length());
    for(int i = 0; i< n/2; i++){
        int temp = s[i];
        s[i] = s[n-i-1];
        s[n-i-1] = temp;
    }
};

int main(int argc, char const *argv[])
{
    string s = "olleh";
    reverse(s);
    cout << s;
    return 0;
}
