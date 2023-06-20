bool isValidParenthesis(string expression)
{
    // Write your code here.
    stack<char>st;
    for(int i=0;i<expression.size();i++)
    {
        if(expression[i]=='['||expression[i]=='{' || expression[i]=='(')
        {
            st.push(expression[i]);
        }
        else if(expression[i]==']')
        {
            
            if(!st.empty() && st.top()=='[')
            {
             
              st.pop();
            }
            else{return false;}

        }
        else if(expression[i]==')')
        {
            
            if(!st.empty() && st.top()=='(')
            {
              
              st.pop();
            }
            else{return false;}

        }
        else if(expression[i]=='}')
        {
            
            if(!st.empty() &&  st.top()=='{')
            {
             
              st.pop();
            }
            else{return false;}

        }
    }
    if(!st.empty())
    {return false;}
    else{return true;}
}