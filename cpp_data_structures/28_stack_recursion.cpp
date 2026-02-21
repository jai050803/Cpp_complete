// Stack using recursion (recursive call stack)
#include <iostream>
using namespace std;

void printStack(int n) {
    if (n == 0) return;
    cout << n << " ";
    printStack(n - 1);
}

int main() {
    int n = 5;
    cout << "Stack (top to bottom): ";
    printStack(n);
    cout << endl;
    return 0;
}
