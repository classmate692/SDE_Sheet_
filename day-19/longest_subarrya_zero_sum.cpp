#include <bits/stdc++.h>

int LongestSubsetWithZeroSum(vector < int > arr) {

  // Write your code here
  int sum=0;
  int maxi=0;
  map<int,int>m;          //1 -1 2 -2  
  for(int i=0;i<arr.size();i++)
  {
     sum+=arr[i];
     if(sum==0)
     {
       maxi=max(maxi,i+1);
     }
     else 
     {
       if(m.find(sum)!=m.end())
       {
         maxi=max(maxi,i-m[sum]);
       }
       else{
          m[sum]=i;
       }
     }
    
  }
  return maxi;
}