// Binary Heap (Min Heap and Max Heap)
#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main() {
    // Min Heap
    priority_queue<int, vector<int>, greater<int>> minHeap;
    minHeap.push(4); minHeap.push(2); minHeap.push(8);
    cout << "Min Heap: ";
    while (!minHeap.empty()) {
        cout << minHeap.top() << " ";
        minHeap.pop();
    }
    cout << endl;
    // Max Heap
    priority_queue<int> maxHeap;
    maxHeap.push(4); maxHeap.push(2); maxHeap.push(8);
    cout << "Max Heap: ";
    while (!maxHeap.empty()) {
        cout << maxHeap.top() << " ";
        maxHeap.pop();
    }
    cout << endl;
    return 0;
}
