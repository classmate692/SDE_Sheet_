#include <bits/stdc++.h>

int findMajorityElement(int arr[], int n) {
	// Write your code here.
	int element=-1,count=0;
        for (int i = 0; i < n; i++) {
           if (count == 0) {
                 element=arr[i];
				 count++;            
		  }
		  else if (element == arr[i]) {
          count++;
          }
		  else{count--;}
    }
	count=0;
        for (int i = 0; i < n; i++) {
          if (element == arr[i]) {
           count++;
		  }
          }
                if (count > floor(n / 2)) {
                 return element;
                } else { return -1;
                }
}