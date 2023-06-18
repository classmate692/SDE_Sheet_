#include <bits/stdc++.h> 
/*************************************************************
    Following is the Binary Tree node structure

    template <typename T>
    class BinaryTreeNode 
    {
      public : 
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data) 
        {
            this -> data = data;
            left = NULL;
            right = NULL;
        }

        ~BinaryTreeNode() 
        {
            if (left)
            {
                delete left;
            }
            if (right)
            {
                delete right;
            }
        }
    };

*************************************************************/
bool solve(BinaryTreeNode<int>* root,long long int min,long   long int max)
{
    if(root==NULL)
    {return  true;}
   if(root->data>=max || root->data<=min)
   {return false;}
   return solve(root->left,min,root->data)&& solve(root->right,root->data,max);
}
bool validateBST(BinaryTreeNode<int>* root) 
{ long long int mini=-2147483649;
 long long int maxi=2147483649;
        return solve(root, mini, maxi);
    // Write your code here
}