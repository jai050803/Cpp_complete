// 2D array functions: fetch, print, sum
#include <iostream>
using namespace std;

void print2D(int arr[][3], int rows) {
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < 3; j++) cout << arr[i][j] << " ";
        cout << endl;
    }
}

int sum2D(int arr[][3], int rows) {
    int sum = 0;
    for(int i = 0; i < rows; i++)
        for(int j = 0; j < 3; j++) sum += arr[i][j];
    return sum;
}

int main() {
    int matrix[2][3] = {{1, 2, 3}, {4, 5, 6}};
    cout << "Print 2D array:\n";
    print2D(matrix, 2);
    cout << "Sum of 2D array: " << sum2D(matrix, 2) << endl;
    return 0;
}
