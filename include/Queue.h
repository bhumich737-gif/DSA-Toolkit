
#ifndef QUEUE_H
#define QUEUE_H

class Queue
{
private:
    struct Node
    {
        int data;
        Node* next;

        Node(int value) : data(value), next(nullptr) {}
    };

    Node* frontNode;
    Node* rearNode;

public:
    Queue();
    ~Queue();

    void enqueue(int value);
    bool dequeue();
    int front() const;
    bool isEmpty() const;
};

#endif
