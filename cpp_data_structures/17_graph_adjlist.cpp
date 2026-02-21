// Graph (adjacency list, unweighted, undirected)
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int V = 5;
    vector<vector<int>> adj(V);
    adj[0] = {1, 4};
    adj[1] = {0, 2, 3, 4};
    adj[2] = {1, 3};
    adj[3] = {1, 2, 4};
    adj[4] = {0, 1, 3};
    cout << "Adjacency List:\n";
    for(int i = 0; i < V; i++) {
        cout << i << ": ";
        for(int j : adj[i]) cout << j << " ";
        cout << endl;
    }
    return 0;
}
