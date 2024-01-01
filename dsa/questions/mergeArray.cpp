#include <iostream>
#include "../../customClasses/MyAlgo.h"
using namespace std;

void merge(int arr1[], int l1, int arr2[], int l2, int arr3[], int l3){
    int i = 0, j = 0, k = 0;
    while (i < l1 && j < l2){
        if(arr1[i] < arr2[j]){
            arr3[k++] = arr1[i++];
        }else{
            arr3[k++] = arr2[j++];
        }
    }

    while (i<l1){
        arr3[k++] = arr1[i++];
    }
    while (j<l2){
        arr3[k++] = arr2[j++];
    }
    
}

int main(){
    int arr1[5] = {1,3,5,7,9};
    int arr2[4] = {2,4,6,8};

    int arr3[9] = {0};

    merge(arr1, 5, arr2, 4, arr3, 9);
    printArray(arr3,9);
    
}