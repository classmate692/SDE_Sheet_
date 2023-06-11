#include <bits/stdc++.h> 
/************************************************************

    Following is the TreeNode class structure:

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

vector<int> getTopView(TreeNode<int> *root) {
    // Write your code here.
    vector<int>v;
    if(root==NULL)
    {return v;}
    map<int,int>m;
    queue<pair<TreeNode<int>*,int>>q;
    q.push({root,0});
    while(!q.empty())
    {
        pair<TreeNode<int>*,int>cur=q.front();
        q.pop();
        if(m.find(cur.second)==m.end())
        {
            m[cur.second]=cur.first->val;
        }
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