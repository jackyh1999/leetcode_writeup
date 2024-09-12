int oddCells(int m, int n, vector<vector<int>>& indices) {
	int ans = 0;
	int mat[m][n];
	for(int i=0;i<m;i++)
		for(int j=0;j<n;j++)
			mat[i][j] = 0;
	for(int i=0;i<indices.size();i++){
		for(int j=0;j<n;j++) mat[indices[i][0]][j]++;
		for(int j=0;j<m;j++) mat[j][indices[i][1]]++;
	}
	for(int i=0;i<m;i++)
		for(int j=0;j<n;j++)
			if(mat[i][j] % 2 == 1) ans++;
	return ans;
}