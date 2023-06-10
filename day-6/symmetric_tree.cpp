/*****************************************************

    Following is the Binary Tree node structure:
    
    class BinaryTreeNode {
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
            if(left) 
                delete left;
            if(right) 
                delete right;
        }
    };

******************************************************/

bool isSymmetrichelp(BinaryTreeNode<int>* left,BinaryTreeNode<int>* right)
{
    if(left==NULL || right==NULL)
    {
        return true;
    }
    if(left==NULL && right!=NULL || left!=NULL && right==NULL)
    {
        return false;
    }
    if(left->data!=right->data)
    {
        return false;
    }
    return isSymmetrichelp(left->left,right->right)&& isSymmetrichelp(left->right,right->left);
}
bool isSymmetric(BinaryTreeNode<int>* root)
{
    // Write your code here.    
    return root==NULL|| isSymmetrichelp(root->left,root->right);
}