int nearestValidPoint(int x, int y, vector<vector<int>>& points) {
	int ans = -1, min_dist = INT_MAX;
	for(int i=0; i<points.size(); i++){
		if((points[i][0] == x || points[i][1] == y) && abs(points[i][0]-x) + abs(points[i][1]-y) < min_dist) {
			ans = i;
			min_dist = abs(points[i][0]-x) + abs(points[i][1]-y);
		}    
	}
	return ans;
}