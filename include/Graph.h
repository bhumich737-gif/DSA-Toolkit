
#ifndef GRAPH_H
#define GRAPH_H

#include <vector>

class Graph
{
private:
    int vertices;
    std::vector<std::vector<int>> adj;

public:
    Graph(int v);
    void addEdge(int u, int v);
    void BFS(int start);
};

#endif
