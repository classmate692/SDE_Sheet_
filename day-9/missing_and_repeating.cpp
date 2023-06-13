#include <bits/stdc++.h>

pair<int,int> missingAndRepeating(vector<int> &arr, int ni)
{
pair<int,int>p;
        for(int i=0;i<ni;i++)
        {
            if((arr[abs(arr[i])-1])>0)
            {
                arr[abs(arr[i])-1] = -(arr[abs(arr[i])-1]);
               
            }
            else
            {
                p.second =abs(arr[i]);
                
              
            }
        }
        for(int i=0;i<ni;i++)
        {
            if(arr[i]>0)
            {
                p.first =i+1;
                break;
            }
        }
        return p;
	
}
 