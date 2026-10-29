//15.Represent graph edges using an array of structures.

#include <iostream>
using namespace std;

struct Edge {
    int source;
    int destination;
};

int main() {
    Edge edges[4];  // Array to store 4 edges

    edges[0] = {1, 2};
    edges[1] = {1, 3};
    edges[2] = {2, 4};
    edges[3] = {3, 4};

    cout << "Graph Edges:\n";

    for (int i = 0; i < 4; i++) {
        cout << edges[i].source << " -> "
             << edges[i].destination << endl;
    }

    return 0;
}

/*Graph Edges:
1 -> 2
1 -> 3
2 -> 4
3 -> 4*/
