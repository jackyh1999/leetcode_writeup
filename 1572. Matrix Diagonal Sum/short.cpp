int diagonalSum(vector<vector<int>>& mat) {
	int sum = 0, size = mat.size();
	for(int i=0;i<size;i++) sum += (mat[i][i] + mat[i][size-1-i]);        
	return (size % 2) ? sum - mat[size/2][size/2] : sum;
}