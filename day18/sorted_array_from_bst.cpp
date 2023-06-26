#include <bits/stdc++.h> 
/************************************************************

    Following is the TreeNode<int> class structure

    template <typename T>
    class TreeNode<int> {
       public:
        T val;
        TreeNode<int><T> *left;
        TreeNode<int><T> *right;
        
        TreeNode<int>(T val) {
            this->val = val;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/
 
  TreeNode<int>* solve(vector<int>&num,int l,int h)
  { if(l>h)
  {return NULL;}
       int mid=l+(h-l)/2;
       TreeNode<int>* root=new TreeNode<int>(num[mid]);
        root->left=solve(num,l,mid-1);
        root->right=solve(num,mid+1,h);
        return root;
  }
TreeNode<int>* sortedArrToBST(vector<int> &nums, int n)
{
  
    return solve(nums,0,n-1);
    // Write your code here.
}