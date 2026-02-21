// Queue implementation using linked list
#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

class Queue {
    Node *front, *rear;
public:
    Queue() { front = rear = nullptr; }
    void enqueue(int x) {
        Node* temp = new Node();
        temp->data = x;
        temp->next = nullptr;
        if(!rear) front = rear = temp;
        else { rear->next = temp; rear = temp; }
    }
    int dequeue() {
        if(!front) { cout << "Queue Underflow\n"; return -1; }
        int val = front->data;
        Node* temp = front;
        front = front->next;
        if(!front) rear = nullptr;
        delete temp;
        return val;
    }
};

int main() {
    Queue q;
    q.enqueue(7); q.enqueue(14); q.enqueue(21);
    cout << "Dequeue: " << q.dequeue() << endl;
    cout << "Dequeue: " << q.dequeue() << endl;
    return 0;
}
