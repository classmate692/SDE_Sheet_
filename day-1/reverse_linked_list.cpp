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

LinkedListNode<int> *reverseLinkedList(LinkedListNode<int> *head) 
{
    // Write your code here
  LinkedListNode<int>*prev=NULL;
    LinkedListNode<int>*temp=head;
    if (head == NULL || head->next == NULL) {
     return head;
    }
    while (temp != NULL) {
      LinkedListNode<int>*nexti=temp->next;
      temp->next=prev;
      prev=temp;
      temp=nexti;
    }
    return prev;
}