#include <bits/stdc++.h> 
vector<int> nextPermutation(vector<int> &arr, int N)
{
    //  Write your code here.
    vector<int>v;
      int index=-1,index2=0;
       for(int i=N-2;i>=0;i--)
       {
           if(arr[i]<arr[i+1])
           {
               index=i;
               break;
           }
       }
       if(index==-1)
       {
           reverse(arr.begin(),arr.end());
       }
       else
       {
           for(int i=N-1;i>=0;i--)
           {
               if(arr[i]>arr[index])
               {
                   index2=i;
                   break;
               }
           }
           swap(arr[index],arr[index2]);
           reverse(arr.begin()+index+1,arr.end());
       }
       return arr;
}