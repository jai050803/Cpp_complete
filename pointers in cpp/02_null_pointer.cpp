// Null pointers in C++
#include <iostream>
using namespace std;

int main() {
    int* p = nullptr;
    if(p == nullptr) {
        cout << "Pointer is null." << endl;
    } else {
        cout << "Pointer is not null." << endl;
    }
    return 0;
}
