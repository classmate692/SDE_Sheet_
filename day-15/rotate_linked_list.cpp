/**
 * Definition for singly-linked list.
 * class Node {
 * public:
 *     int data;
 *     Node *next;
 *     Node() : data(0), next(nullptr) {}
 *     Node(int x) : data(x), next(nullptr) {}
 *     Node(int x, Node *next) : data(x), next(next) {}
 * };
 */

Node *rotate(Node *head, int k) {
     // Write your code here.
   
     
     int length=0;
    
     Node* temp=head;
     while(temp!=NULL)
     {
          length++;
          temp=temp->next;
     }
      k=k%length;
     if(length-k==0|| k==0)
     {return head;}
     
    
     int diff=length-k;
     temp=head;
     Node* nexti=NULL;
     while(temp->next!=NULL)
     {
          
          temp=temp->next;
     }
     temp->next=head;
     
     while(diff--)
     {
          temp=temp->next;
     }
     
     head=temp->next;
     temp->next=NULL;
     return head;
}