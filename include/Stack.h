
#ifndef STACK_H
#define STACK_H

class Stack
{
private:
    struct Node
    {
        int data;
        Node* next;

        Node(int value) : data(value), next(nullptr) {}
    };

    Node* topNode;

public:
    Stack();
    ~Stack();

    void push(int value);
    bool pop();
    int peek() const;
    bool isEmpty() const;
};

#endif
