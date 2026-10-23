#include <iostream>
#include <vector>
#include "sorting.h"
#include "LinkedList.h"
#include "Stack.h"
#include "Queue.h"
#include "Tree.h"
#include "Graph.h"
#include "DP.h"

using namespace std;

int main()
{
    cout << "===== DSA TOOLKIT DEMO =====\n\n";

    // 1. Sorting
    vector<int> a = {8, 3, 6, 2, 9, 1};
    vector<int> b = a;

    mergeSort(a);
    quickSort(b);

    cout << "Merge Sort: ";
    for (int x : a)
        cout << x << " ";

    cout << "\nQuick Sort: ";
    for (int x : b)
        cout << x << " ";
    cout << "\n\n";

    // 2. Linked List
    LinkedList list;
    list.insertEnd(10);
    list.insertEnd(20);
    list.insertEnd(30);

    cout << "Linked List: ";
    list.display();

    cout << "Search 20: "
         << (list.search(20) ? "Found" : "Not Found") << "\n";

    cout << "Delete 20: "
         << (list.deleteValue(20) ? "Success" : "Failed") << "\n";

    cout << "After deletion: ";
    list.display();

    cout << "Delete missing value 99: "
         << (list.deleteValue(99) ? "Success" : "Not Found") << "\n";

    list.reverse();
    cout << "Reversed List: ";
    list.display();
    cout << "\n";

    // 3. Stack
    Stack st;
    st.push(10);
    st.push(20);
    st.push(30);

    cout << "Stack top: " << st.peek() << "\n";
    st.pop();
    cout << "Stack top after pop: " << st.peek() << "\n\n";

    // 4. Queue
    Queue q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    cout << "Queue front: " << q.front() << "\n";
    q.dequeue();
    cout << "Queue front after dequeue: " << q.front() << "\n\n";

    // 5. Binary Search Tree
    Tree tree;
    tree.insert(50);
    tree.insert(30);
    tree.insert(70);
    tree.insert(20);
    tree.insert(40);

    cout << "BST Inorder: ";
    tree.inorder();

    cout << "BST Level Order: ";
    tree.levelOrder();

    cout << "Search 40: "
         << (tree.search(40) ? "Found" : "Not Found") << "\n\n";

    // 6. Graph and BFS
    Graph graph(5);
    graph.addEdge(0, 1);
    graph.addEdge(0, 2);
    graph.addEdge(1, 3);
    graph.addEdge(2, 4);

    cout << "Graph BFS from vertex 0: ";
    graph.BFS(0);
    cout << "\n";

    // 7. Dynamic Programming: 0/1 Knapsack
    vector<int> weights = {3, 2, 4};
    vector<int> values = {30, 20, 40};
    int capacity = 5;

    cout << "0/1 Knapsack maximum value: "
         << knapsack01(capacity, weights, values,
                       static_cast<int>(weights.size()))
         << "\n";

    cout << "\n===== DEMO COMPLETE =====\n";

    return 0;
}