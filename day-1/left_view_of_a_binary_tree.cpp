#include <bits/stdc++.h> 
/************************************************************

    Following is the TreeNode class structure

    template <typename T>
    class TreeNode {
       public:
        T data;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T data) {
            this->data = data;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/

vector<int> getLeftView(TreeNode<int> *root)
{
    //    Write your code here
      vector<int>v;
    if(root==NULL){return v;}
  
   queue<TreeNode<int>*>q;
   q.push(root);
   while(!q.empty())
   {int count=0;
       int size=q.size();
       for(int i=0;i<size;i++)
       {
           TreeNode<int>* cur=q.front();
           q.pop();
           if(count==0)
           {
               v.push_back(cur->data);
               count++;
           }
          
           if(cur->left!=NULL)
           {
               q.push(cur->left);
           }
           if(cur->right!=NULL)
           {q.push(cur->right);}
       }
   }
   return v;
}