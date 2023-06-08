#include <bits/stdc++.h> 
/************************************************************

    Following is the Binary Tree node structure:
    
    template <typename T>
    class TreeNode {
        public :
        T data;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T data) {
            this -> data = data;
            left = NULL;
            right = NULL;
        }

        ~TreeNode() {
            if(left)
                delete left;
            if(right)
                delete right;
        }
    };

************************************************************/
void traversalleft(TreeNode<int>* root,vector<int>&v)
{
    if(root==NULL ||root->left==NULL and root->right==NULL)
    {return;}
    v.push_back(root->data);
    if(root->left!=NULL)
    {traversalleft(root->left,v);}
    else
    {traversalleft(root->right,v);}
}
void traverseleaf(TreeNode<int>* root,vector<int>&v)
{
    if(root==NULL){return;}
    else if(root->left==NULL and root->right==NULL)
    {
        v.push_back(root->data);
    }
    traverseleaf(root->left,v);
    traverseleaf(root->right,v);
    
}
void traverseright(TreeNode<int>* root,vector<int>&v)
{
    if(root==NULL ||root->left==NULL and root->right==NULL)
    {return;}

    if(root->right!=NULL)
    {traverseright(root->right,v);}
    else
    {traverseright(root->left,v);}
        v.push_back(root->data);
}
vector<int> traverseBoundary(TreeNode<int>* root){
    // Write your code here.
     vector<int>v;
         if(root==NULL)
         {
             return v;
         }
         v.push_back(root->data);
         traversalleft(root->left,v);
         traverseleaf(root->left,v);
         traverseleaf(root->right,v);
         traverseright(root->right,v);
         return v;
}