// Priority Queue using STL
#include <iostream>
#include <queue>
using namespace std;

int main() {
    priority_queue<int> pq;
    pq.push(10); pq.push(5); pq.push(20);
    cout << "Priority Queue (max-heap): ";
    while(!pq.empty()) {
        cout << pq.top() << " ";
        pq.pop();
    }
    cout << endl;
    return 0;
}
