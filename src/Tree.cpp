
#include "Tree.h"
#include <iostream>
#include <queue>

using namespace std;

Tree::Tree()
{
    root = nullptr;
}

Tree::~Tree()
{
    clear(root);
}

void Tree::clear(Node* node)
{
    if (node == nullptr)
        return;

    clear(node->left);
    clear(node->right);
    delete node;
}

Tree::Node* Tree::insertNode(Node* node, int value)
{
    if (node == nullptr)
        return new Node(value);

    if (value < node->data)
        node->left = insertNode(node->left, value);
    else if (value > node->data)
        node->right = insertNode(node->right, value);

    return node;
}

void Tree::insert(int value)
{
    root = insertNode(root, value);
}

bool Tree::searchNode(Node* node, int value)
{
    if (node == nullptr)
        return false;

    if (node->data == value)
        return true;

    if (value < node->data)
        return searchNode(node->left, value);

    return searchNode(node->right, value);
}

bool Tree::search(int value)
{
    return searchNode(root, value);
}

void Tree::inorderTraversal(Node* node)
{
    if (node == nullptr)
        return;

    inorderTraversal(node->left);
    cout << node->data << " ";
    inorderTraversal(node->right);
}

void Tree::inorder()
{
    inorderTraversal(root);
    cout << endl;
}

void Tree::levelOrder()
{
    if (root == nullptr)
    {
        cout << "Tree is empty" << endl;
        return;
    }

    queue<Node*> q;
    q.push(root);

    while (!q.empty())
    {
        Node* current = q.front();
        q.pop();

        cout << current->data << " ";

        if (current->left != nullptr)
            q.push(current->left);

        if (current->right != nullptr)
            q.push(current->right);
    }

    cout << endl;
}
