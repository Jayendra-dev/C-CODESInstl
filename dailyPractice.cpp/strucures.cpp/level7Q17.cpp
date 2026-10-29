//17. Sort graph edges according to weight.


#include <iostream>
using namespace std;

struct Edge {
    int source;
    int destination;
    int weight;
};

int main() {
    Edge edges[5] = {
        {1, 2, 30},
        {1, 3, 10},
        {2, 3, 20},
        {2, 4, 50},
        {3, 4, 40}
    };

    // Sort edges by weight using Bubble Sort
    for (int i = 0; i < 5 - 1; i++) {
        for (int j = 0; j < 5 - i - 1; j++) {
            if (edges[j].weight > edges[j + 1].weight) {
                Edge temp = edges[j];
                edges[j] = edges[j + 1];
                edges[j + 1] = temp;
            }
        }
    }

    cout << "Edges sorted by weight:\n";

    for (int i = 0; i < 5; i++) {
        cout << edges[i].source << " - "
             << edges[i].destination
             << " : " << edges[i].weight << endl;
    }

    return 0;
}

/*output:
Edges sorted by weight:
1 - 3 : 10
2 - 3 : 20
1 - 2 : 30
3 - 4 : 40
2 - 4 : 50*/