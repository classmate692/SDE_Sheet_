#include <bits/stdc++.h>

void setZeros(vector<vector<int>> &matrix)
{
	// Write your code here.
	 vector<vector<int>>temp=matrix;
	for(int i=0;i<temp.size();i++)
	{
		for(int j=0;j<temp[0].size();j++)
		{
			if(temp[i][j]==0)
			{
				for(int j=0;j<temp[0].size();j++)
				{
					matrix[i][j]=0;
				}
				for(int k=0;k<temp.size();k++)
				{
					matrix[k][j]=0;
				}
			}
		}
	}
}