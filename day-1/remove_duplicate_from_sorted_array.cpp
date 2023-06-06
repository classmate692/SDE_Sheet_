int removeDuplicates(vector<int> &arr, int n) {
	// Write your code here.
	int i=0,j=i+1;
        while (j < n) {
          if (arr[i] != arr[j]) {
             arr[i+1]=arr[j];
			 i++;j++;
		  }
		  else{
			  j++;
		  }
        }
		return i+1;
}