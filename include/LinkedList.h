
#ifndef LINKEDLIST_H
#define LINKEDLIST_H

class LinkedList
{
private:
    struct Node
    {
        int data;
        Node* next;

        Node(int value) : data(value), next(nullptr) {}
    };

    Node* head;

public:
    LinkedList();
    ~LinkedList();

    void insertEnd(int value);
    bool search(int value);
    bool deleteValue(int value);
    void reverse();
    void display();
};

#endif
