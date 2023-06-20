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

        BinaryTreeNode(T data) {
            this -> data = data;
            left = NULL;
            right = NULL;
        }

        ~BinaryTreeNode() {
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
void solve(BinaryTreeNode<int>* root,vector<int>&v)
{
if(root==NULL){return ;}
solve(root->left,v);
v.push_back(root->data);
solve(root->right,v);
}
pair<int,int> predecessorSuccessor(BinaryTreeNode<int>* root, int key)
{
    // Write your code here.
    vector<int>v;
    pair<int,int>q;
    solve(root,v);
    q.first=-1;
    q.second=-1;
    for(int i=0;i<v.size();i++)
    {
        if(v[i]==key)
        {if(i-1>=0){
            q.first=v[i-1];}
            if(i+1<v.size()){
            q.second=v[i+1];}
        }

    }
    return q;
}
