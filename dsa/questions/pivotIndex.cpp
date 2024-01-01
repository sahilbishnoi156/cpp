#include <iostream>
#include "../../customClasses/MyAlgo.h"
using namespace std;

int main(){
    const int l = 7;
    int arr[l] = {1,2,1,3,5,6,4};

    int s = 0, e = l - 1, m = s + (e-s)/2;
    while(s < e){
        if(arr[m] >= arr[0]){
            s=m+1;
        }
        else{
            e=m;
        }
        m = s + (e-s)/2;
    }
    cout << arr[s] << endl;
}