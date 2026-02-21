// Passing pointer to function
#include <iostream>
using namespace std;

void increment(int* p) {
    (*p)++;
}

int main() {
    int num = 10;
    cout << "Before increment: " << num << endl;
    increment(&num);
    cout << "After increment: " << num << endl;
    return 0;
}
