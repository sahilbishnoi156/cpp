#include <iostream>
using namespace std;

int main() {
    const int row = 4, col = 4;
    int arr[row][col] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};

    int left = 0, right = col - 1, top = 0, bottom = row - 1;

    while (left <= right && top <= bottom) {
        for (int i = left; i <= right; i++) {
            cout << arr[top][i] << " ";
        }
        top++;

        for (int i = top; i <= bottom; i++) {
            cout << arr[i][right] << " ";
        }
        right--;

         // Check if there is a remaining row to print
        if (top <= bottom) {
            // Print bottom row
            for (int i = right; i >= left; i--) {
                cout << arr[bottom][i] << " ";
            }
            bottom--;
        }

        // Check if there is a remaining column to print
        if (left <= right) {
            // Print left column
            for (int i = bottom; i >= top; i--) {
                cout << arr[i][left] << " ";
            }
            left++;
        }
    }
    return 0;
}
