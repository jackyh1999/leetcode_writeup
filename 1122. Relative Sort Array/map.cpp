vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
	map<int, int> mymap;
	int curr = 0;
	for(auto& num : arr1) mymap[num]++;
	for(auto& num : arr2){
		while(mymap[num]-- > 0) arr1[curr++] = num;
		mymap.erase(num);
	}
	for(auto i : mymap)
		while(mymap[i.first]-- > 0) arr1[curr++] = i.first;
	return arr1;
}