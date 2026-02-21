// Header Linked List implementation (singly)
#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node(int x) : data(x), next(nullptr) {}
};

struct HeaderList {
    Node* header;
    HeaderList() { header = new Node(-1); }
    void insert(int x) {
        Node* temp = new Node(x);
        temp->next = header->next;
        header->next = temp;
    }
    void print() {
        Node* temp = header->next;
        while (temp) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main() {
    HeaderList hl;
    hl.insert(5);
    hl.insert(10);
    hl.insert(15);
    hl.print();
    return 0;
}
