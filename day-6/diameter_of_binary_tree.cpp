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
int diameter(TreeNode<int>* root,int &dia)
{
    if(root==NULL)
    {
        return 0;
    }
    int lh=diameter(root->left,dia);
    int rh=diameter(root->right,dia);
     dia=max(dia,lh+rh);
      return 1+max(lh,rh);
}
int diameterOfBinaryTree(TreeNode<int> *root)
{
	// Write Your Code Here.
    int dia=0;
    if(root==NULL)
    {
        return dia;
    }
    diameter(root,dia);
    return dia;
}

