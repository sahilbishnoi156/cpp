#include <iostream>
#include "../../customClasses/MyAlgo.h"
using namespace std;

int main(){
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int l = 8;

    printArray(arr, l);
    for (int i = 0; i < l; i += 2 )
    {
        if(i+1 < l)
        swap(arr[i], arr[i+1]);
    }
    printArray(arr, l);
    
}