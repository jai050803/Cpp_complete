// Stack implementation using linked list
#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

class Stack {
    Node* top;
public:
    Stack() { top = nullptr; }
    void push(int x) {
        Node* temp = new Node();
        temp->data = x;
        temp->next = top;
        top = temp;
    }
    int pop() {
        if(!top) { cout << "Stack Underflow\n"; return -1; }
        int val = top->data;
        Node* temp = top;
        top = top->next;
        delete temp;
        return val;
    }
    int peek() {
        if(!top) return -1;
        return top->data;
    }
};

int main() {
    Stack s;
    s.push(5); s.push(10); s.push(15);
    cout << "Top: " << s.peek() << endl;
    cout << "Pop: " << s.pop() << endl;
    cout << "Top after pop: " << s.peek() << endl;
    return 0;
}
