#include <bits/stdc++.h>

vector<vector<long long int>> printPascal(int n) 
{
     vector<vector<long long int>>ans;
   vector<long long int>v;
   v.push_back(1);
   ans.push_back(v);
   v.clear();
     if(n==1 )
     {return ans;}
       v.push_back(1);
     v.push_back(1);
   ans.push_back(v);
   v.clear();
   if(n==2)
   {
     return ans;
   }
     for(int i=2;i<n;i++)
     {
       for(int j=0;j<=i;j++)
       {
         if(j==0 || j==i)
         {v.push_back(1);}
         else{
         v.push_back(ans[i-1][j]+ans[i-1][j-1]);}

       }     ans.push_back(v);
       v.clear();
     }
     return ans;
  // Write your code here.
}
