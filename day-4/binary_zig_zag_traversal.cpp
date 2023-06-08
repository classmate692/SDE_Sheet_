#include <bits/stdc++.h> 
/*************************************************************

    Following is the Binary Tree node structure

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

vector<int> zigZagTraversal(BinaryTreeNode<int> *root)
{vector<vector<int>>ans;
vector<int>res;
if(root==NULL){return res;}
queue<BinaryTreeNode<int>*>q;
q.push(root);
int count=0;
while(!q.empty())
{ vector<int>v;
    int size=q.size();
    for(int i=0;i<size;i++)
    {
        BinaryTreeNode<int>* cur=q.front();
        q.pop();
        v.push_back(cur->data);
        if(cur->left!=NULL)
        {
            q.push(cur->left);
        }
        if(cur->right!=NULL)
        {
            q.push(cur->right);
        }
        
    }
    if(count%2==0)
    {
        ans.push_back(v);
        v.clear();
    }
    else {
        reverse(v.begin(),v.end());
        ans.push_back(v);
    }
    count++;
}

for(auto  x:ans)
{
    res.insert(res.end(), x.begin(), x.end());
}
return res;
    // Write your code here!
 
}
