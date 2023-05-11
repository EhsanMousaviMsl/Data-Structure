#include <iostream>

class Node
{
public:
    int data;
    Node* right;
    Node* left;
};

Node* getNode(int a)
{
    Node* new_node = new Node();
    new_node->data = a;
    new_node->left = new_node->right = nullptr;
    return new_node;
}

Node* insert(Node* root, int b)
{
    if(root == nullptr)
    {
        root = getNode(b);
    }

    else if (b <= root->data)
    {
        root->left = insert(root->left,b);
    }
    else
    {
        root->right = insert(root->right,b);
    }
    return root;
}

bool search(Node* root, int c)
{
    if(root == nullptr) return false;
    else if (root->data == c) return true;
    else if (c <= root->data) return search(root->left,c);
    else return search(root->right, c);

}

int main()
{
    Node* root = nullptr;
    root = insert(root,14);        root = insert(root,14);
    root = insert(root,17);
    root = insert(root,11);
    int number;
    std::cout << "Enter a number to be searched: ";
    std::cin >> number;
    if (search(root,number)== true) std::cout << "found "<<number<<std::endl;
    else std::cout << number << " does not exsist.";


}