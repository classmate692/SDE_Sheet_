#include <bits/stdc++.h> 
/*************************************************************
 
    Following is the Binary Tree node structure.

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
    };

*************************************************************/

vector<int> bottomView(BinaryTreeNode<int> * root){

    // Write your code here.
    vector<int>v;
    if(root==NULL)
    {return v;}
    map<int,int>m;
    queue<pair<BinaryTreeNode<int>*,int>>q;
    q.push({root,0});
    while(!q.empty())
    {
        pair<BinaryTreeNode<int>*,int>cur=q.front();
        q.pop();
      
            m[cur.second]=cur.first->data;
        if(cur.first->left!=NULL)
        {
            q.push({cur.first->left,cur.second-1});
        }
        if(cur.first->right!=NULL)
        {
            q.push({cur.first->right,cur.second+1});
        }
    }
    for(auto &x:m)
    {
        v.push_back(x.second);
    }
    return v;
    
}
