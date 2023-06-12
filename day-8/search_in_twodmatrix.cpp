#include <bits/stdc++.h>

int findDuplicate(vector<int> &arr, int n){
	// Write your code here.
	unordered_map<int,int>m;
	for(int i=0;i<n;i++)
	{
		m[arr[i]]++;
	}
	for(auto x:m)
	{
		if(x.second>1)
		{
			return x.first;
		}
	}
}
