vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
	vector<int> ans;
	multimap<int, int> mymap;
	for(int i=0;i<mat.size();i++){
		int tmp = 0;
		for(int j=0;j<mat[i].size();j++){
			if(mat[i][j] == 1) tmp++;
		}
		mymap.insert( pair<int, int>(tmp, i) );
	}
	for(auto row: mymap){
		ans.push_back(row.second);
		if(--k == 0) break;
	}
	return ans;
}