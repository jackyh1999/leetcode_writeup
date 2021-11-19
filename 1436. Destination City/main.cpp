string destCity(vector<vector<string>>& paths) {
	unordered_set<string> cities;
	for(int i=0;i<paths.size();i++) cities.insert(paths[i][1]);
	for(int i=0;i<paths.size();i++) cities.erase(paths[i][0]);
	return *cities.begin();
}