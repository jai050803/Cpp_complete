// Circular Doubly Linked List implementation
#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* prev;
    Node* next;
    Node(int x) : data(x), prev(nullptr), next(nullptr) {}
};

void printList(Node* head) {
    if (!head) return;
    Node* temp = head;
    do {
        cout << temp->data << " ";
        temp = temp->next;
    } while (temp != head);
    cout << endl;
}

void insertEnd(Node*& head, int x) {
    Node* newNode = new Node(x);
    if (!head) {
        head = newNode;
        newNode->next = newNode->prev = newNode;
        head = newNode;
        return;
    }
    Node* last = head->prev;
    last->next = newNode;
    newNode->prev = last;
    newNode->next = head;
    head->prev = newNode;
}

int main() {
    Node* head = nullptr;
    insertEnd(head, 10);
    insertEnd(head, 20);
    insertEnd(head, 30);
    printList(head);
    return 0;
}
