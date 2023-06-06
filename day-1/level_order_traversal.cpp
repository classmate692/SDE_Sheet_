#include <bits/stdc++.h> 
/************************************************************

    Following is the BinaryTreeNode class structure

    template <typename T>
    class BinaryTreeNode {
       public:
        T val;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T val) {
            this->val = val;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/
vector<int> getLevelOrder(BinaryTreeNode<int> *root)
{
    vector<int>v;
    if (root == NULL) {
        return v;
    }
    queue<BinaryTreeNode<int>*>q;
    q.push(root);
    while(!q.empty()) {
        BinaryTreeNode<int>*cur=q.front();
        q.pop();
        v.push_back(cur->val);
        if (cur->left != NULL) {
         q.push(cur->left);
        }
        if (cur->right != NULL) {
         q.push(cur->right);
        }

    }
    return v;
    //  Write your code here.
}