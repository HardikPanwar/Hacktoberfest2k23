#include <iostream>
#include <vector>

using namespace std;

struct Edge {
    int source, destination, weight;
};

void bellmanFord(vector<Edge> edges, int numVertices, int source) {
    vector<int> distance(numVertices, INT_MAX);
    distance[source] = 0;

    for (int i = 0; i < numVertices - 1; i++) {
        for (const auto& edge : edges) {
            if (distance[edge.source] != INT_MAX && distance[edge.source] + edge.weight < distance[edge.destination]) {
                distance[edge.destination] = distance[edge.source] + edge.weight;
            }
        }
    }

    for (const auto& edge : edges) {
        if (distance[edge.source] != INT_MAX && distance[edge.source] + edge.weight < distance[edge.destination]) {
            cout << "Graph contains negative weight cycle" << endl;
            return;
        }
    }

    cout << "Shortest distances from source node " << source << ":" << endl;
    for (int i = 0; i < numVertices; i++) {
        cout << "Vertex " << i << ": " << distance[i] << endl;
    }
}

int main() {
    int numVertices, numEdges;
    cout << "Enter the number of vertices in the graph: ";
    cin >> numVertices;
    cout << "Enter the number of edges in the graph: ";
    cin >> numEdges;

    vector<Edge> edges(numEdges);
    for (int i = 0; i < numEdges; i++) {
        cout << "For edge " << i + 1 << ":" << endl;
        cout << "Enter source, destination, and weight (space-separated): ";
        cin >> edges[i].source >> edges[i].destination >> edges[i].weight;
    }

    int source;
    cout << "Enter the source node: ";
    cin >> source;

    bellmanFord(edges, numVertices, source);

    return 0;
}
