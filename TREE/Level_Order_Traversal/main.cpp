#include<iostream>
#include<queue>

class Node
{
public:
    char data;
    Node* left;
    Node* right;
};

void levelOrder(Node*root)
{
    if(root == nullptr) return;
    std::queue<Node*> q;
    q.push(root);

    while(!q.empty())
    {
        Node* current = q.front();
        std::cout << current->data << " ";
        if(current->left != nullptr) q.push(current->left);
        if(current->right != nullptr) q.push(current->right);
        q.pop();
    }
}

int main()
{
    Node* root = new Node();
    Node* lvl_one_left_node = new Node();
    Node * lvl_one_right_node= new Node();
    Node* lvl_two_left_1_node= new Node();
    Node * lvl_two_left_2_node= new Node();
    Node* lvl_two_left_3_node= new Node();
    Node * lvl_two_left_4_node= new Node();
    root->data = 'a';
    root->left = lvl_one_left_node;
    root->right = lvl_one_right_node;
    lvl_one_left_node->data = 'b';
    lvl_one_right_node->data = 'c';
    lvl_one_left_node->left = lvl_two_left_1_node;
    lvl_one_left_node->right=lvl_two_left_2_node;
    lvl_one_right_node->left=lvl_two_left_3_node;
    lvl_one_right_node->right=lvl_two_left_4_node;
    lvl_two_left_1_node->data = 'd';
    lvl_two_left_2_node->data = 'e';
    lvl_two_left_3_node->data = 'f';
    lvl_two_left_4_node->data = 'g';
    levelOrder(root);
    
}