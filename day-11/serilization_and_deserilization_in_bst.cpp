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
#include <sstream>
string serializeTree(TreeNode<int> *root)
{
 //    Write your code here for serializing the tree
 string s="";
 if(root==NULL)
 {return s;}
 queue<TreeNode<int>*>q;
 q.push(root);
 while(!q.empty())
 {
     TreeNode<int>*cur=q.front();
     q.pop();
     if(cur==NULL)
     {
         s.append("#,");
     }
     else
     {
         s.append(to_string(cur->data)+',');
         
     }
     if(cur!=NULL)
     {q.push(cur->left);
     
     q.push(cur->right);}
 }

 return s;

}

TreeNode<int>* deserializeTree(string &serialized)
{
 //    Write your code here for deserializing the tree
  if(serialized.size()==0){return NULL;}
     queue<TreeNode<int>*>q;
      stringstream s(serialized);
      string str;
      getline(s,str,',');
      TreeNode<int>* root=new TreeNode<int>(stoi(str));
      q.push(root);
      while(!q.empty())
      {
          TreeNode<int>* cur=q.front();
          q.pop();
          getline(s,str,',');
          if(str=="#")
          {cur->left=NULL;}
          else{
               TreeNode<int>* left=new TreeNode<int>(stoi(str));
               cur->left=left;
               q.push(left);
          }
          getline(s,str,',');
          if(str=="#")
          {cur->right=NULL;}
          else{
               TreeNode<int>* right=new TreeNode<int>(stoi(str));
               cur->right=right;
               q.push(right);
          }
      }
      return root;
}



