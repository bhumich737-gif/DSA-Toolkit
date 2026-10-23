
#include "Graph.h"
#include <iostream>
#include <queue>

using namespace std;

Graph::Graph(int v)
{
    vertices = v;
    adj.resize(v);
}

void Graph::addEdge(int u, int v)
{
    if (u < 0 || u >= vertices || v < 0 || v >= vertices)
        return;

    adj[u].push_back(v);
    adj[v].push_back(u);
}

void Graph::BFS(int start)
{
    if (start < 0 || start >= vertices)
    {
        cout << "Invalid starting vertex" << endl;
        return;
    }

    vector<bool> visited(vertices, false);
    queue<int> q;

    visited[start] = true;
    q.push(start);

    while (!q.empty())
    {
        int current = q.front();
        q.pop();

        cout << current << " ";

        for (int neighbor : adj[current])
        {
            if (!visited[neighbor])
            {
                visited[neighbor] = true;
                q.push(neighbor);
            }
        }
    }

    cout << endl;
}
