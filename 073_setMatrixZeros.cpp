void setZeroes(vector<vector<int>>& matrix)
{
	int m = matrix.size();
	if(m==0) return;
	int n = matrix[0].size();
	int col0 = 0;
	for(int i=0; i<=m-1; i++)
	{
		if(matrix[i][0] == 0)
		{
			col0 = 1;
			break;
		}
	}
	for(int i=0; i<=m-1; i++)
	{
		for(int j=1; j<=n-1; j++)
		{
			if(matrix[i][j] == 0)
			{
				matrix[i][0] = 0;
				matrix[0][j] = 0;
			}
		}
	}
	for(int i=m-1; i>=0; i--)
	{
		for(int j=n-1; j>=1; j--)
		{
			if(matrix[i][0] == 0|| matrix[0][j] == 0)
				matrix[i][j] = 0;
		}
		if(col0 == 1)
		{
			matrix[i][0] = 0;
		}
	}
}