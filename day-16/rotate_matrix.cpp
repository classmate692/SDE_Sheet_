#include <bits/stdc++.h>

void rotateMatrix(vector<vector<int>> &mat, int n, int m)
{
    // Write your code here
    int top=0,left=0,right=m-1,bottom=n-1;
    while(left<right && top<bottom )
    {
        int temp=mat[top][left];
        for(int row=left+1;row<=right;row++)
        {
            int k=mat[top][row];
            mat[top][row]=temp;
            temp=k;
        }top++;
        for(int col=top;col<=bottom;col++)
        {
            int k=mat[col][right];
            mat[col][right]=temp;
            temp=k;
        }
        right--;
        for(int row=right;row>=left;row--)
        {
            int k=mat[bottom][row];
            mat[bottom][row]=temp;
            temp=k;
        }
        bottom--;
        for( int col=bottom;col>=top;col--)
        {
             int k=mat[col][left];
            mat[col][left]=temp;
            temp=k;
        }
        left++;
        mat[top-1][left-1]=temp;
    }

}