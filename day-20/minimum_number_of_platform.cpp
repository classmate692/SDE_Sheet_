  static bool cmp(pair<int,int>a,pair<int,int>b)
    {
        return a.second<b.second;
    }
int calculateMinPatforms(int arr[], int dep[], int n) {
    // Write your code here.

    	// Your code here
    	vector<pair<int,int>>v;
    	for(int i=0;i<n;i++)
    	{
    	    v.push_back(make_pair(arr[i],dep[i]));
    	}
    	sort(v.begin(),v.end(),cmp);
    	int count=1;
    	int end=v[0].second;
    	for(int i=1;i<v.size();i++)
    	{
    	    if(v[i].first<end)
    	    {
    	        count++;
    	    }
    	    else
    	    {
    	        end=v[i].second;;
    	    }
    	}
         	
    	return count;
}