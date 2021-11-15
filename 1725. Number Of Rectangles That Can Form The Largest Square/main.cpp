int countGoodRectangles(vector<vector<int>>& rectangles) {
	int max_len = -1;
	unordered_map<int, int> mymap;
	for(int i=0;i<rectangles.size();i++){
		int len = min(rectangles[i][0], rectangles[i][1]);
		max_len = max(len, max_len);
		mymap[len]++;
	}
	return mymap[max_len];
}