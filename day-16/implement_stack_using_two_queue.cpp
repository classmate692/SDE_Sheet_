#include <bits/stdc++.h> 
class Stack {
	// Define the data members.
queue<int>q1,q2;
   public:
    Stack() {
        // Implement the Constructor.
    }

    /*----------------- Public Functions of Stack -----------------*/

    int getSize() {
        // Implement the getSize() function.
        return q1.size();
    }

    bool isEmpty() {
        // Implement the isEmpty() function.
        if(q1.empty()){return true;}
        else{return false;}
    }

    void push(int element) {
        // Implement the push() function.
        q2.push(element);
        if(q1.empty())
        {swap(q2,q1);}
        else
        {
           while(!q1.empty())
           {
               q2.push(q1.front());
               q1.pop();
           }
           swap(q2,q1);
        }
    }

    int pop() {
        // Implement the pop() function.
        if(q1.empty()){return -1;}
        else{
            int data=q1.front();
            q1.pop();
            return data;
        }
    }

    int top() {
        // Implement the top() function.
           if(q1.empty()){return -1;}
        else{
            int data=q1.front();
            
            return data;
        }
    }
};