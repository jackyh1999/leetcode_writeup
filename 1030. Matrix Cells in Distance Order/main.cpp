vector<vector<int>> allCellsDistOrder(int rows, int cols, int rCenter, int cCenter) {
	vector<vector<int>> ans;
	for(int i=0; i<rows; i++)
		for(int j=0; j<cols; j++)
			ans.push_back({i,j,abs(rCenter-i) + abs(cCenter-j)});
	sort(ans.begin(), ans.end(), [](vector<int>& v1, vector<int>& v2){ return v1[2] < v2[2]; });
	for(auto& vec : ans) vec.pop_back();
	return ans;
}