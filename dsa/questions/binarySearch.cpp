#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector<int>& arr, int key) {

    int start = 0;
    int end = arr.size()-1;

    int mid = start + (end-start)/2;

    while(start <= end) {

        if(arr[mid] == key) {
            return mid;
        }
        //go to right wala part
        if(key > arr[mid]) {
            start = mid + 1;
        }
        else{ //key < arr[mid]
            end = mid - 1;
        }

        mid = start + (end-start)/2;
    }
    
    return -1;
}

int main(){
    const int l = 8;
    vector<int> arr = {1,2,3,5,6,7,8,9};
    cout << binarySearch(arr, 8) << endl;
}