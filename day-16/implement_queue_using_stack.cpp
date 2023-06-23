#include<stack>
class Queue {
    // Define the data members(if any) here.
    private:
    stack<int>s1;
    stack<int>s2;
    public:
    Queue() {
        // Initialize your data structure here.
    }

    void enQueue(int val) {
        // Implement the enqueue() function.
        s1.push(val);
    }

    int deQueue() {
        // Implement the dequeue() function.
       
        if(!s2.empty())
        {int data= s2.top(); s2.pop();return data;}
        else
        {if(s1.empty()){return -1;}
        else{
            while(!s1.empty())
            {s2.push(s1.top()); 
             s1.pop();
             }
           int data= s2.top(); s2.pop();return data;
            }
            
        }
    }

    int peek() {
        // Implement the peek() function here.
         if(!s2.empty())
        {return s2.top();}
        else
        {if(s1.empty()){return -1;}
        else{
            while(!s1.empty())
            {s2.push(s1.top());
              s1.pop();}
            return s2.top();}
            
        }
    }

    bool isEmpty() {
        // Implement the isEmpty() function here.
        if(s1.empty() && s2.empty()){return true;}
        else{return false;}
    }
};