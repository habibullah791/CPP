#include <iostream>
#include <string>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node()
    {
        data = 0;
        left = NULL;
        right = NULL;
    }

    Node(int data)
    {
        this->data = data;
        left = NULL;
        right = NULL;
    }
};

class BST
{
public:
    Node *root;

    BST()
    {
        root = NULL;
    }

    void insertNode(int data);
    void displayData();
};

void BST ::insertNode(int data)
{
    Node *newNode = new Node(data);
    Node *temp;
    temp = root;

    if (root == NULL)
    {
        root = newNode;
    }
    else if (data > root->data)
    {
        while (temp != NULL)
        {
            if (data > temp->data)
            {
                temp = temp->right;
            }
            else if (data < temp->data)
            {
                temp = temp->left;
            }
        }
    }
}
void BST::displayData()
{
    cout << root->data;
}
int main()
{
    // BST *root = new Node();
    BST b1;
    b1.insertNode(2);
    b1.insertNode(4);
    b1.displayData();
}
