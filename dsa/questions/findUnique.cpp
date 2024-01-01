#include <iostream>
#include "../../customClasses/MyAlgo.h"
using namespace std;

int main(){
    const int l = 10;
    int arr[l];
    inputArray(arr, l);
    int arr2[100] ={0};
    for(int i = 0; i < l; i++){
        arr2[arr[i]]++;
    }
    for(int i = 0; i < 100; i++){
        if(arr2[i]==1){
            cout << i;
        }
    }
}