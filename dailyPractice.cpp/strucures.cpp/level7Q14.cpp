//14. Represent an edge using a structure.
#include <iostream>
using namespace std;

struct Edge {
    int source;       // Starting vertex
    int destination;  // Ending vertex
};

int main() {
    Edge e1;

    e1.source = 1;
    e1.destination = 2;

    cout << "Source Vertex: " << e1.source << endl;
    cout << "Destination Vertex: " << e1.destination << endl;

    return 0;
}

//output:

//Source Vertex: 1
//Destination Vertex: 2
