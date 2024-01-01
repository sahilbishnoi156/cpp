#include <iostream>
using namespace std;

int reverse(const int &n){
        int n1 = 0;
        int x = n;
        int temp;
        while(x != 0){
            temp = x % 10;
            n1 = (n1 * 10) + temp;
            x = x / 10;
        }
        return n1;
};

int main(int argc, char const *argv[])
{
    cout << reverse(122);
    return 0;
}
