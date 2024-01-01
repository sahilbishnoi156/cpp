#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int ans = 0, i = 0;

    //? Decimal to Binary
    //  while(n!=0){
    //     int bit = n & 1;
    //     ans = (bit * pow(10, i)) + ans;
    //     n = n >> 1;
    //     i++;
    // }

    //? Binary to Decimal

    while(n!=0){
        int bit = n % 10;
        ans = bit ? ans + pow(2, i ) : ans;
        n = n / 10;
        i++;
    }
    cout << ans << endl;
}