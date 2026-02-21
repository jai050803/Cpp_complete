// Circular Queue implementation using array
#include <iostream>
using namespace std;
#define MAX 5

class CircularQueue {
    int arr[MAX];
    int front, rear;
public:
    CircularQueue() { front = rear = -1; }
    void enqueue(int x) {
        if((rear+1)%MAX == front) { cout << "Queue Full\n"; return; }
        if(front == -1) front = 0;
        rear = (rear+1)%MAX;
        arr[rear] = x;
    }
    int dequeue() {
        if(front == -1) { cout << "Queue Empty\n"; return -1; }
        int val = arr[front];
        if(front == rear) front = rear = -1;
        else front = (front+1)%MAX;
        return val;
    }
};

int main() {
    CircularQueue cq;
    cq.enqueue(1); cq.enqueue(2); cq.enqueue(3); cq.enqueue(4); cq.enqueue(5);
    cout << "Dequeue: " << cq.dequeue() << endl;
    cq.enqueue(6);
    cout << "Dequeue: " << cq.dequeue() << endl;
    return 0;
}
