// Stack using queue (STL)
#include <iostream>
#include <queue>
using namespace std;

class Stack {
    queue<int> q;
public:
    void push(int x) {
        q.push(x);
        for (int i = 0; i < q.size() - 1; i++) {
            q.push(q.front());
            q.pop();
        }
    }
    int pop() {
        if (q.empty()) return -1;
        int val = q.front();
        q.pop();
        return val;
    }
    int top() {
        return q.empty() ? -1 : q.front();
    }
    bool empty() { return q.empty(); }
};

int main() {
    Stack s;
    s.push(1); s.push(2); s.push(3);
    cout << "Top: " << s.top() << endl;
    cout << "Pop: " << s.pop() << endl;
    cout << "Top after pop: " << s.top() << endl;
    return 0;
}
