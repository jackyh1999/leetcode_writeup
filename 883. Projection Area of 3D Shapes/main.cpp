int projectionArea(vector<vector<int>>& grid) {
	int ans = 0, max_xz, max_yz;
	for(int i=0; i<grid.size(); i++){
		max_xz = INT_MIN;
		max_yz = INT_MIN;
		for(int j=0; j<grid.size(); j++){
			max_xz = max(max_xz, grid[i][j]);
			max_yz = max(max_yz, grid[j][i]);
			if(grid[i][j]>0) ans++;
		}
		ans += max_xz;
		ans += max_yz;
	}
	return ans;
}