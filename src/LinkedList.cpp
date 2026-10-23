
#include "LinkedList.h"
#include <iostream>

using namespace std;

LinkedList::LinkedList()
{
    head = nullptr;
}

LinkedList::~LinkedList()
{
    while (head != nullptr)
    {
        Node* temp = head;
        head = head->next;
        delete temp;
    }
}

void LinkedList::insertEnd(int value)
{
    Node* newNode = new Node(value);

    if (head == nullptr)
    {
        head = newNode;
        return;
    }

    Node* temp = head;

    while (temp->next != nullptr)
        temp = temp->next;

    temp->next = newNode;
}

bool LinkedList::search(int value)
{
    Node* temp = head;

    while (temp != nullptr)
    {
        if (temp->data == value)
            return true;

        temp = temp->next;
    }

    return false;
}

bool LinkedList::deleteValue(int value)
{
    if (head == nullptr)
        return false;

    if (head->data == value)
    {
        Node* temp = head;
        head = head->next;
        delete temp;
        return true;
    }

    Node* temp = head;

    while (temp->next != nullptr && temp->next->data != value)
        temp = temp->next;

    if (temp->next == nullptr)
        return false;

    Node* nodeToDelete = temp->next;
    temp->next = nodeToDelete->next;
    delete nodeToDelete;

    return true;
}

void LinkedList::reverse()
{
    Node* previous = nullptr;
    Node* current = head;

    while (current != nullptr)
    {
        Node* nextNode = current->next;
        current->next = previous;
        previous = current;
        current = nextNode;
    }

    head = previous;
}

void LinkedList::display()
{
    Node* temp = head;

    while (temp != nullptr)
    {
        cout << temp->data << " -> ";
        temp = temp->next;
    }

    cout << "NULL" << endl;
}
