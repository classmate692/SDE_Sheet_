#include <bits/stdc++.h>

vector<int> ninjaAndSortedArrays(vector<int>& arr1, vector<int>& arr2, int m, int n) {
	// Write your code here.
  vector<int>v;
  int i=0,j=0;
  while(i<arr1.size() and j<arr2.size())
  {
    if(arr1[i]==0)
    {break;}
    else if(arr1[i]==arr2[j])
    {
      v.push_back(arr1[i]);
       v.push_back(arr2[j]);
       i++;j++;
    }
    else if(arr1[i]<arr2[j])
    {
      v.push_back(arr1[i]);
      i++;
    }
    else{
       v.push_back(arr2[j]);
      j++;
    }
  }
  while(j<arr2.size())
  {
     v.push_back(arr2[j]);
      j++;
  }
  while(i<arr1.size() and arr1[i]!=0)
  {
      v.push_back(arr1[i]);
      i++;
    }

}