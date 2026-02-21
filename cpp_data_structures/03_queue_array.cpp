// Queue implementation using array
#include <iostream>
using namespace std;
#define MAX 100

class Queue {
    int arr[MAX];
    int front, rear;
public:
    Queue() { front = rear = -1; }
    void enqueue(int x) {
        if(rear == MAX-1) { cout << "Queue Overflow\n"; return; }
        if(front == -1) front = 0;
        arr[++rear] = x;
    }
    int dequeue() {
        if(front == -1 || front > rear) { cout << "Queue Underflow\n"; return -1; }
        return arr[front++];
    }
    bool isEmpty() { return front == -1 || front > rear; }
};

int main() {
    Queue q;
    q.enqueue(10); q.enqueue(20); q.enqueue(30);
    cout << "Dequeue: " << q.dequeue() << endl;
    cout << "Dequeue: " << q.dequeue() << endl;
    return 0;
}
