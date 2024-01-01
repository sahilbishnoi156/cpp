#include <iostream>
#include <string>
#include "../../customClasses/MyAlgo.h"
using namespace std;

char maxChar(string str, int len){
    int arr[26] = {0};
    for (int i = 0; i < len; i++){
        arr[str[i] - 97]++;
    }
    int max = 0;
    int max_i = 0;
    for(int i = 0; i < 26; i++){
        if(arr[i] > max){
            max_i = i;
            max = arr[i];
        }
    }
    return max_i + 97;
}

int main(){
    string str;
    getline(cin, str);
    cout << maxChar(str, str.length());
}