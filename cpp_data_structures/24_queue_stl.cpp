// Queue using STL
#include <iostream>
#include <queue>
using namespace std;

int main() {
    queue<int> q;
    q.push(10); q.push(20); q.push(30);
    cout << "Queue front: " << q.front() << endl;
    q.pop();
    cout << "Queue front after pop: " << q.front() << endl;
    return 0;
}
