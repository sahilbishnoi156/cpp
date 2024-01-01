#include <iostream>
using namespace std;

void mergeArrays(float* arr1, float* arr2, int n1,int n2, float* arr3){
    int i = 0, j = 0, k = 0;
    // traverse the arr1 and insert its element in arr3
    while (i < n1)
    {
        arr3[k++] = arr1[i++];
    }
    // now traverse arr2 and insert in arr3
    while (j < n2)
    {
        arr3[k++] = arr2[j++];
    }
};

double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size){
    float arr1[] = {1, 2};
    float arr2[] = {3};

    int s1 = sizeof(arr1) / sizeof(arr1[0]);
    int s2 = sizeof(arr2) / sizeof(arr2[0]);
    float arr3[s1+s2];

    mergeArrays(arr1, arr2, s1, s2, arr3);
    
    if ((s1+s2) % 2 == 0)
    {
        return (arr3[((s1+s2) / 2) - 1 ] + arr3[((s1+s2) / 2)]) / 2;
    }
    else{
        return arr3[(s1+s2) / 2];
    }
}
int main(int argc, char const *argv[])
{
    int arr1[] = {1, 2};
    int arr2[] = {3, 4};

    int s1 = sizeof(arr1) / sizeof(arr1[0]);
    int s2 = sizeof(arr2) / sizeof(arr2[0]);
    
    cout << findMedianSortedArrays(arr1, s1, arr2, s2);
    
    
    return 0;
}
