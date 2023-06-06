/*
Following is the class structure of the Node class:

class Node
{
public:
    int data;
    Node *next;
    Node()
    {
        this->data = 0;
        next = NULL;
    }
    Node(int data)
    {
        this->data = data; 
        this->next = NULL;
    }
    Node(int data, Node* next)
    {
        this->data = data;
        this->next = next;
    }
};
*/
int length(Node *head) {
    Node* temp=head;
    int n=0;
    while (temp != NULL) {
      n++;
      temp=temp->next;
    }
    return n;
}
Node* removeKthNode(Node* head, int K)
{
    // Write your code here.
    if (head == NULL) {
     return head;
    }
    int len=length(head);
    int ans=len-K;
    if (K > len) {
     return head;
    }
    if (ans == 0) {
        Node* nexti=head->next;
        delete (head);
        head=nexti;
        return head;
    }
     
    Node* temp=head;int count=0;;
    bool flag=true;
    while (temp != NULL and temp->next!=NULL and  temp->next->next!=NULL) {
      if (count == (ans-1)) {
       Node* nexti=temp->next->next;
       Node* del=temp->next;
       delete (del);
       temp->next=nexti;
       flag=false;
      }
      count++;
      temp=temp->next;
    }
    if (flag == true) {
     Node* del=temp->next;
     delete (del);
     temp->next=NULL;
     return head;
    } else {
    return head;
    }
}
