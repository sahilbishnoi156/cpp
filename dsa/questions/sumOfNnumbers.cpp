#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    if(n%2==0){
        cout <<  (n/2)*(1+n);
    }
    else{
        n = n - 1;
        int sum = (n/2)*((1+n));
        cout << sum + n + 1;
    }
};