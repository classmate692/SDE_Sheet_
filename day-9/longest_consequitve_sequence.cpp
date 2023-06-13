#include <bits/stdc++.h>

int lengthOfLongestConsecutiveSequence(vector<int> &arr, int n) {
    // Write your code here.
     long long int maxi=1;
        if(arr.size()==0)
        {
            return 0; 
        } 
        unordered_map<int,int>m;
        for(int i=0;i<arr.size();i++)
        {
            m[arr[i]]++;
        }
        for(int i=0;i<arr.size();i++)
        { long long int count=1;
            if(m.find(arr[i]-1)!=m.end())
            {
                continue;
            }
            else
            {
                int num=arr[i];
                while(m.count(num+1))
                {
                    count++;
                    num+=1;
                }
                maxi=max(maxi,count);
            }
        }
        return maxi;
    
}