int findCenter(vector<vector<int>>& edges) {
	unordered_set<int> myset;
	myset.insert(edges[0][0]);
	myset.insert(edges[0][1]);
	if(myset.count(edges[1][0])) return edges[1][0];
	return edges[1][1];
}