#include <bits/stdc++.h> 
int maximumProduct(vector<int> &arr, int n)
{
	// Write your code here
	 long long  current=1;
	    long long maxi=INT_MIN;
	    for(int i=0;i<n;i++)
	    {
	        current*=arr[i];
	        maxi=max(maxi,current);
	        if(current==0)
	        {
	            current=1;
	        }
	    }
	    current=1;
	    for(int i=n-1;i>=0;i--)
	    {
	        current*=arr[i];
	        maxi=max(maxi,current);
	        if(current==0)
	        {
	            current=1;
	        }
	    }
	    return maxi;
}
