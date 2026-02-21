// Circular Singly Linked List implementation
#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node(int x) : data(x), next(nullptr) {}
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
        newNode->next = head;
        return;
    }
    Node* temp = head;
    while (temp->next != head) temp = temp->next;
    temp->next = newNode;
    newNode->next = head;
}

int main() {
    Node* head = nullptr;
    insertEnd(head, 1);
    insertEnd(head, 2);
    insertEnd(head, 3);
    printList(head);
    return 0;
}
