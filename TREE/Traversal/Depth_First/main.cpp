#include <iostream>

class Node
{
public:
    char data;
    Node* right;
    Node* left;
};

// pre-order Teraversal

void preoreder (Node* root)
{
    if (root == nullptr) return;
    std::cout << root->data;
    preoreder(root->left);
    preoreder(root->right);
}
// In-Order Teraversal
void inorder (Node* root)
{
  if(root == nullptr) return;
  preoreder(root->left);
  std::cout << root->data;
  preoreder(root->right);  
}
// Post-Order Teraversal
void postorder(Node* root)
{
    if(root == nullptr) return;
    preoreder(root->left);
    preoreder(root->right);
    std::cout << root->data;
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
    std::cout << "\npreorder Traversal: \n";
    preoreder(root);
    std::cout << "\nInorder Traversal: \n";
    inorder(root);
    std::cout << "\npostorder Traversal: \n";
    postorder(root);
}