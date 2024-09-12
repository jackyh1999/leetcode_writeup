string kthDistinct(vector<string>& arr, int k) {
	map<string, int> mymap;
	for(auto& i: arr) mymap[i]++;
	for(auto& i: arr)
		if(mymap[i] == 1 && --k == 0) return i;        
	return "";
}