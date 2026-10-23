
#ifndef TREE_H
#define TREE_H

class Tree
{
private:
    struct Node
    {
        int data;
        Node* left;
        Node* right;

        Node(int value)
        {
            data = value;
            left = nullptr;
            right = nullptr;
        }
    };

    Node* root;

    Node* insertNode(Node* node, int value);
    bool searchNode(Node* node, int value);
    void inorderTraversal(Node* node);
    void clear(Node* node);

public:
    Tree();
    ~Tree();

    void insert(int value);
    bool search(int value);
    void inorder();
    void levelOrder();
};

#endif
