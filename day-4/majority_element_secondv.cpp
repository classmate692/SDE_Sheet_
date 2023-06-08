#include <bits/stdc++.h>

vector<int> majorityElementII(vector<int> &arr)
{
    // Write your code here.
    int count1=0,count2=0,element1=0,element2=0;
    for (int i = 0; i < arr.size(); i++) {
      if (element1 == arr[i]) {
        count1++;
      }
      else if (element2 == arr[i]) {
       count2++;
      }
      else if (count1 == 0) {
       element1=arr[i];
       count1++;
      }
       else if (count2 == 0) {
       element2=arr[i];
       count2++;
            }
            else{
              count1--;
              count2--;
            }
    }
    count1=0,count2=0;
    for(int i=0;i<arr.size();i++)
    {
      if(arr[i]==element1)
      {count1++;}
      else if(arr[i]==element2)
      {count2++;}
    }
    vector<int>v;
 if(count1>(arr.size()/3)){ v.push_back(element1);}
   if(count2>(arr.size()/3))
    {v.push_back(element2);}
    return v;
}