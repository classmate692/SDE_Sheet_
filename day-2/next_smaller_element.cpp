#include<bits/stdc++.h>
vector<int> nextSmallerElement(vector<int> &arr, int n)
{
    // Write your code here.
    stack<int>st;
    vector< int >v;
   // v.push_back(-1);
    for(int i=arr.size()-1;i>=0;i--)
    {
        if(st.size()==0)
        {
            v.push_back(-1);
        }
        else if(st.size()>0 and st.top()<arr[i])
        {
            v.push_back(st.top());
        }
        else if(st.size()>0 and st.top()>=arr[i])
        {
            while(st.size()>0 and st.top()>=arr[i])
            {
                st.pop();
            }
            if(st.size()==0)
            {
                v.push_back(-1);
            }
            else{
                v.push_back(st.top());
            }
        }
        st.push(arr[i]);

    }
    reverse(v.begin(),v.end());
    return v;
}