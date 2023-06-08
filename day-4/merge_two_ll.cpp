#include <bits/stdc++.h>

/************************************************************

    Following is the linked list node structure.
    
    template <typename T>
    class Node {
        public:
        T data;
        Node* next;

        Node(T data) {
            next = NULL;
            this->data = data;
        }

        ~Node() {
            if (next != NULL) {
                delete next;
            }
        }
    };

************************************************************/

Node<int>* sortTwoLists(Node<int>* head1, Node<int>* head2)
{   Node<int>* res=NULL;
 if(head1==NULL)
 {
     return head2;
 }
if(head2==NULL)
 {
     return head1;
 }
 if(head1->data<=head2->data)
 {
     res=head1;
     res->next=sortTwoLists(head1->next,head2);
 }
 else
 {
     res=head2;
     res->next=sortTwoLists(head2->next,head1);
 }
 return res;
    // Write your code here.
}
