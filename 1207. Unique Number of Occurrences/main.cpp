bool uniqueOccurrences(vector<int>& arr) {
	unordered_map<int, int> mymap;
	unordered_set<int> occurrence;
	for(auto& i: arr) mymap[i]++;
	for(auto& i: mymap){ 
		if(occurrence.count(i.second) == 0) occurrence.insert(i.second);
		else return false;
	}
	return true;
}