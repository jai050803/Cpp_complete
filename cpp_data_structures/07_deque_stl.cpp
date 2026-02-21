// Doubly ended queue (Deque) using STL
#include <iostream>
#include <deque>
using namespace std;

int main() {
    deque<int> dq;
    dq.push_back(1);
    dq.push_front(2);
    dq.push_back(3);
    cout << "Deque: ";
    for(int x : dq) cout << x << " ";
    dq.pop_front();
    dq.pop_back();
    cout << "\nAfter pops: ";
    for(int x : dq) cout << x << " ";
    cout << endl;
    return 0;
}
