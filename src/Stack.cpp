
#include "Stack.h"

Stack::Stack() : topNode(nullptr) {}

Stack::~Stack()
{
    while (topNode != nullptr)
    {
        Node* temp = topNode;
        topNode = topNode->next;
        delete temp;
    }
}

void Stack::push(int value)
{
    Node* newNode = new Node(value);
    newNode->next = topNode;
    topNode = newNode;
}

bool Stack::pop()
{
    if (topNode == nullptr)
        return false;

    Node* temp = topNode;
    topNode = topNode->next;
    delete temp;
    return true;
}

int Stack::peek() const
{
    if (topNode == nullptr)
        return -1;

    return topNode->data;
}

bool Stack::isEmpty() const
{
    return topNode == nullptr;
}
