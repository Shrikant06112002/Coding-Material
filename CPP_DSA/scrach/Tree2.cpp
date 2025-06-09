#include <iostream>
using namespace std;

struct TreeNode
{
    int data;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : data(0), left(nullptr), right(nullptr) {}
    TreeNode(int val) : data(val), left(nullptr), right(nullptr) {}
    TreeNode(int val, TreeNode *left, TreeNode *right) : data(val), left(left), right(right) {}
};

class BinarySearchTree
{
private:
    TreeNode *root;

public:
    BinarySearchTree()
    {
        root = nullptr;
    }
    ~BinarySearchTree()
    {
        // logic
    }
    void insertNode(int val)
    {
        root = insertRec(val);
    }

private:
    TreeNode *insertRec(int val)
    {
        if (root == nullptr)
        {
            return new TreeNode(val);
        }
        if (root->data > val)
        {
            root->left = insertRec(val);
        }
        else if (root->data < val)
        {
            root->right = insertRec(val);
        }
        else
        {
            cout << "Duplicate not allowed";
            return root;
        }
        return root;
    }
};
int main()
{
    BinarySearchTree bst;
    bst.insertNode(10);
    bst.
    return 0;
}