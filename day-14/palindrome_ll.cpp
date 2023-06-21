#include <bits/stdc++.h> 
/****************************************************************

    Following is the class structure of the LinkedListNode class:

    template <typename T>
    class LinkedListNode
    {
    public:
        T data;
        LinkedListNode<T> *next;
        LinkedListNode(T data)
        {
            this->data = data;
            this->next = NULL;
        }
    };

*****************************************************************/

bool isPalindrome(LinkedListNode<int> *head) {
    // Write your code here.
     vector<int>v;
    LinkedListNode<int>* temp=head;
        while(temp!=NULL)
        {
            v.push_back(temp->data);
            temp=temp->next;
        }
        vector<int>ans;
        for(int i=v.size()-1;i>=0;i--)
        {
            ans.push_back(v[i]);
        }
        int i=0;
        for(int i=0;i<v.size();i++)
        {
            if(v[i]!=ans[i])
            {
                return false;
            }
        }
        return true;

}