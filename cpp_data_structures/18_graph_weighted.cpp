// Weighted Graph (adjacency list, undirected)
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int V = 3;
    vector<vector<pair<int, int>>> adj(V);
    adj[0].push_back({1, 10});
    adj[1].push_back({0, 10});
    adj[1].push_back({2, 5});
    adj[2].push_back({1, 5});
    cout << "Weighted Adjacency List:\n";
    for(int i = 0; i < V; i++) {
        cout << i << ": ";
        for(auto& p : adj[i]) cout << "(" << p.first << "," << p.second << ") ";
        cout << endl;
    }
    return 0;
}
