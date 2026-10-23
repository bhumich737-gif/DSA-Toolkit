
#include "Queue.h"

Queue::Queue() : frontNode(nullptr), rearNode(nullptr) {}

Queue::~Queue()
{
    while (frontNode != nullptr)
    {
        Node* temp = frontNode;
        frontNode = frontNode->next;
        delete temp;
    }
    rearNode = nullptr;
}

void Queue::enqueue(int value)
{
    Node* newNode = new Node(value);

    if (rearNode == nullptr)
    {
        frontNode = rearNode = newNode;
        return;
    }

    rearNode->next = newNode;
    rearNode = newNode;
}

bool Queue::dequeue()
{
    if (frontNode == nullptr)
        return false;

    Node* temp = frontNode;
    frontNode = frontNode->next;

    if (frontNode == nullptr)
        rearNode = nullptr;

    delete temp;
    return true;
}

int Queue::front() const
{
    if (frontNode == nullptr)
        return -1;

    return frontNode->data;
}

bool Queue::isEmpty() const
{
    return frontNode == nullptr;
}
