// Demonstrates multi-dimensional (2D) array declaration, initialization, and printing
#include <iostream>
using namespace std;

int main() {
    int matrix[2][3] = {{1, 7, 10}, {4, 15, 6}};
    cout << "2D Array (Matrix):\n";
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 3; j++) {
            cout << "matrix[" << i << "][" << j << "]: ";
            cout << matrix[i][j]<< endl;
        }
        cout << endl;
    }
    return 0;
}
