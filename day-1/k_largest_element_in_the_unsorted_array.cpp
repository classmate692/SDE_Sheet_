#include <bits/stdc++.h> 
int kthLargest(vector<int>& v, int size, int K)
{
	// Write your code here.
	sort(v.begin(),v.end(),greater<int>());
	return v[K-1];
}