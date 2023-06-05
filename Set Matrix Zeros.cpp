// Given an m x n integer matrix matrix, if an element is 0, set its entire row and column to 0's.

// You must do it in place.

#include <bits/stdc++.h>

void setZeros(vector<vector<int>> &matrix)
{
	// Write your code here.
	int n = matrix.size();
	int m = matrix[0].size();
	int col0 = 1;
	for(int i=0;i<n;i++)
	{
		if (matrix[i][0] == 0) col0 = 0;
		for(int j=1;j<m;j++)
		{
            if(matrix[i][j]==0)
			{
				matrix[0][j]=matrix[i][0]=0;
			}
		}
	}

	for(int i=1;i<n;i++)
	{
		for(int j=1;j<m;j++)
		{

				if(matrix[0][j]==0 || matrix[i][0]==0)
				{
					matrix[i][j]=0;
				}
			
		}
	}

	if(matrix[0][0]==0)
	{
		for(int i=1;i<m;i++)
		matrix[0][i] = 0;
	}

	if(col0==0)
	{
        for(int i=0;i<n;i++)
		matrix[i][0]=0;
	}
}
