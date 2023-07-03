#include<bits/stdc++.h>
static bool cmp(pair<int,int>a,pair<int,int>b)
{
    return a.second<b.second;
}
int maximumActivities(vector<int> &start, vector<int> &finish) {
    // Write your code here.
    vector<pair<int,int>>p;
    for(int i=0;i<start.size();i++)
    {
        p.push_back(make_pair(start[i],finish[i]));
    }
    sort(p.begin(),p.end(),cmp);
    int end=p[0].second;
    int count=1;
    for( int i=1;i<p.size();i++)
    {if(p[i].first>=end)
    {
        count++;
        end=p[i].second;
    }
    }

    
    return count;
}