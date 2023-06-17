#include <bits/stdc++.h> 
/************************************************************

    Following is the TreeNode class structure

    template <typename T>
    class TreeNode {
       public:
        T val;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T val) {
            this->val = val;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/

int floorInBST(TreeNode<int> * root, int input)
{ if (root == NULL) return -1;
    int ans=0;
        while(root!=NULL)
        {
            if(root->val==input)
            {
                return input;
            }
            else if(root->val>input)
            {
              
                root=root->left;
            }
            else 
            {  ans=root->val;
                root=root->right;
            }
            
        }
        if(ans==0)
        {
            return -1;
        }
        else
        {
        return ans;}
    // Write your code here.
}