#include <bits/stdc++.h> 
int maximumProfit(vector<int> &prices){
    // Write your code here.
    int mini=INT_MAX,ans=INT_MIN;
    for (int i = 0; i < prices.size(); i++) {
      mini=min(mini,prices[i]);
      ans=max(ans,prices[i]-mini);
    }
    return ans;
}