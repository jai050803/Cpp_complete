// Directed Graph (adjacency matrix)
#include <iostream>
using namespace std;

int main() {
    int V = 3;
    int adj[3][3] = { {0, 1, 0}, {0, 0, 1}, {1, 0, 0} };
    cout << "Adjacency Matrix:\n";
    for(int i = 0; i < V; i++) {
        for(int j = 0; j < V; j++) cout << adj[i][j] << " ";
        cout << endl;
    }
    return 0;
}
