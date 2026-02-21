// Returning pointer from function (using static variable)
#include <iostream>
using namespace std;

int* getPointer() {
    static int val = 99;
    return &val;
}

int main() {
    int* p = getPointer();
    cout << "Returned pointer value: " << *p << endl;
    return 0;
}
