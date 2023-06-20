/****************************************************************

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

*****************************************************************/

Node* findIntersection(Node *firstHead, Node *secondHead)
{
    //Write your code here
    int length1=0,length2=0;
    Node* temp=firstHead;
    while(temp!=NULL)
    {
        length1++;
        temp=temp->next;
    }
    temp=secondHead;
    while(temp!=NULL)
    {
        length2++;
        temp=temp->next;
    }
    if(length1>length2)
    {
        int dif=length1-length2;
        temp=firstHead;
        while(firstHead!=NULL && dif!=0)
        {
            dif--;
            firstHead=firstHead->next;
        }
    }
    else if(length1<length2)
    {
        int dif=length2-length1;
        temp=secondHead;
        while(secondHead!=NULL && dif!=0)
        {
            dif--;
            secondHead=secondHead->next;
        }
    }
    while(firstHead!=NULL && secondHead!=NULL)
    {
        if(firstHead==secondHead)
        {
            return firstHead;
        }
        firstHead=firstHead->next;
        secondHead=secondHead->next;
    }
}
