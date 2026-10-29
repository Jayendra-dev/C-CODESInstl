//16. Store weighted graph edges.

#include <iostream>
using namespace std;

struct Edge {
    int source;
    int destination;
    int weight;
};

int main() {
    Edge edges[4];

    // Store source, destination, and weight
    edges[0] = {1, 2, 10};
    edges[1] = {1, 3, 20};
    edges[2] = {2, 4, 15};
    edges[3] = {3, 4, 25};

    cout << "Source  Destination  Weight\n";

    for (int i = 0; i < 4; i++) {
        cout << "  " << edges[i].source
             << "         " << edges[i].destination
             << "          " << edges[i].weight
             << endl;
    }

    return 0;
}
//output:
/*Source  Destination  Weight
  1         2          10
  1         3          20
  2         4          15
  3         4          25*/