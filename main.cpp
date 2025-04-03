// ofekbarshalom@gmail.com

#include "Graph.hpp"
#include "Algorithms.hpp"
#include <iostream>

using namespace std;
using namespace graph;
using namespace algorithms;

// int main() {
//     // Create a graph with 6 vertices (0 to 5)
//     Graph g(6);
//
//     // Add edges: (u, v, weight)
//     g.addEdge(0, 1, 4);
//     g.addEdge(0, 2, 3);
//     g.addEdge(1, 2, 1);
//     g.addEdge(1, 3, 2);
//     g.addEdge(2, 3, 4);
//     g.addEdge(3, 4, 2);
//     g.addEdge(4, 5, 6);
//
//     cout << "Original Graph:\n";
//     g.print_graph();
//
//     // Run Kruskal's algorithm
//     Graph mst = Algorithms::kruskal(g);
//
//     cout << "\nMinimum Spanning Tree (Kruskal):\n";
//     mst.print_graph();
//
//     return 0;
// }