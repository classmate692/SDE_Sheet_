#include <bits/stdc++.h> 
vector<int> KMostFrequent(int n, int k, vector<int> &arr)
{
    // Write your code here.
    vector<int>v;
    map<int,int>m;
    for(int i=0;i<n;i++)
    {
        m[arr[i]]++;
    }
         vector<pair<int,int>>p;
    for(auto x:m)
    {
        p.push_back({x.second,x.first});
    }
    sort(p.begin(),p.end(),greater<pair<int,int>>());
    for(int i=0;i<k;i++)
    {
      v.push_back(p[i].second);
    }
    
    sort(v.begin(),v.end());
    return v;
}