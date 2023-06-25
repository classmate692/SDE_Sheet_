#include <bits/stdc++.h>

vector<vector<int>> pairSum(vector<int> &arr, int s){
   // Write your code here.
   vector<vector<int>>ans;
    map<int,int>m;
    for(int i=0;i<arr.size();i++)
    {int k=s-arr[i];
       if(m.find(k)!=m.end())
       {
          if((k)<=arr[i])
          {
            int count=m[k];
               for(int j=1;j<=count;j++)
               {
                  vector<int>v;
                  v.push_back(k);
                  v.push_back(arr[i]);
                  ans.push_back(v);
               }
          }
                  else
                  {
                      int count=m[k];
                        for(int j=1;j<=count;j++)
                        {
                           vector<int>v;
                           v.push_back(arr[i]);
                           v.push_back(k);
                           ans.push_back(v);
                        }
                  }
         }
       
          m[arr[i]]++;
       
    }
    sort(ans.begin(),ans.end());
    return ans;
}#include <bits/stdc++.h>

vector<vector<int>> pairSum(vector<int> &arr, int s){
   // Write your code here.
   vector<vector<int>>ans;
    map<int,int>m;
    for(int i=0;i<arr.size();i++)
    {int k=s-arr[i];
       if(m.find(k)!=m.end())
       {
          if((k)<=arr[i])
          {
            int count=m[k];
               for(int j=1;j<=count;j++)
               {
                  vector<int>v;
                  v.push_back(k);
                  v.push_back(arr[i]);
                  ans.push_back(v);
               }
          }
                  else
                  {
                      int count=m[k];
                        for(int j=1;j<=count;j++)
                        {
                           vector<int>v;
                           v.push_back(arr[i]);
                           v.push_back(k);
                           ans.push_back(v);
                        }
                  }
         }
       
          m[arr[i]]++;
       
    }
    sort(ans.begin(),ans.end());
    return ans;
}