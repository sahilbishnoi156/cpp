#include <iostream>
using namespace std;

template <typename T, size_t Rows, size_t Cols>
void transpose(const T (&arr)[Rows][Cols], T (&arrT)[Cols][Rows]) {
    for (size_t i = 0; i < Rows; ++i) {
        for (size_t j = 0; j < Cols; ++j) {
            arrT[j][i] = arr[i][j];
        }
    }
}

template <typename T, size_t Rows, size_t Cols>
void printMatrix(const T (&arr)[Rows][Cols]) {
    for (size_t i = 0; i < Rows; ++i) {
        for (size_t j = 0; j < Cols; ++j) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    const size_t r = 4, c = 4;
    int arr[r][c] = {{1,2,3,4},
                      {5,6,7,8},
                      {9,10,11,12},
                      {13,14,15,16}};
    int arrT[c][r];

    transpose(arr, arrT);

    // Output original matrix
    cout << "Original Matrix:" << endl;
    printMatrix(arr);

    // Output transposed matrix
    cout << "Transposed Matrix:" << endl;
    printMatrix(arrT);

    return 0;
}
