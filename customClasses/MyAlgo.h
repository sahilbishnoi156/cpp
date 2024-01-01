#ifndef adder_h
#define adder_h

#include <iostream>
using namespace std;

void SpiralPrint(int (*arr)[4], int row, int col) {
    int top = 0, left = 0, right = col - 1, bottom = row - 1;

    while (top <= bottom && left <= right) {
        for (int i = left; i <= right; i++) {
            cout << arr[top][i] << " ";
        };
        top++;

        for (int i = top; i <= bottom; i++) {
            cout << arr[i][right] << " ";
        };
        right--;

        for (int i = right; i >= left; i--) {
            cout << arr[bottom][i] << " ";
        };
        bottom--;

        for (int i = bottom; i >= top; i--) {
            cout << arr[i][left] << " ";
        };
        left++;
    }
}

int Max(int* arr){
    int i = 0;
    int max = -10000;
    while (arr[i] > max){
        max = arr[i++];
    };
    return max;
}

void printArray(int arr[], int l){
    cout << endl << "Array" << endl;
    for(int i = 0; i < l; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

void inputArray(int arr[], int l){
    for(int i = 0; i < l; i++){
        cin >> arr[i];
    }
}

#endif
