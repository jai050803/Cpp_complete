// Min Heap using priority_queue (STL)
#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main() {
    priority_queue<int, vector<int>, greater<int>> minHeap;
    minHeap.push(5); minHeap.push(2); minHeap.push(8);
    cout << "Min Heap: ";
    while(!minHeap.empty()) {
        cout << minHeap.top() << " ";
        minHeap.pop();
    }
    cout << endl;
    return 0;
}
