#include <iostream>

struct TreeNode
{
    int val;
    TreeNode* right;
    TreeNode* left;
    TreeNode(int a): val(a), right(nullptr), left(nullptr) {}
};

class BinaryTree
{
public:
    BinaryTree():root(nullptr){}
    void insert(int a);
    void remove(int a);
    bool search(int a);

private:
    TreeNode* root;

};

void BinaryTree::insert(int a)
{
    TreeNode* node = new TreeNode(a);
    if (root == nullptr)
    {
        node = root;
        return;
    }
    TreeNode* cur = root;
    while(cur != nullptr)
    {
        if(a < cur->val)
        {
            if (cur->left == nullptr)
            {
                cur->left = node;
                return;
            }
            cur = cur->left;
        }

        else if (a > cur->val)
        {
            if(cur->right == nullptr)
            {
                cur->right = node;
                return;
            }
            cur = cur->right;
        }

        else
        {
           return; 
        }
    }
}

void BinaryTree::remove(int a)
{
    if(root == nullptr)
    {
        return;
    }
    root = remove(root,val);
}

TreeNode* BinaryTree::remove(TreeNode* node, int a)
{
    if(node == nullptr)
    {
        return nullptr;
    }
    if (a < node->val)
    {
        node->left = remove(node->left,a)
    }
}