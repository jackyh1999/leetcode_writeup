vector<int> twoOutOfThree(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3) {
	vector<int> ans;
	unordered_set<int> set1(nums1.begin(), nums1.end());
	unordered_set<int> set2(nums2.begin(), nums2.end());
	unordered_set<int> set3(nums3.begin(), nums3.end());
	unordered_map<int, int> mymap;
	for(auto i: set1) mymap[i]++;
	for(auto i: set2) mymap[i]++;
	for(auto i: set3) mymap[i]++;
	for(auto i: mymap) 
		if(i.second >= 2) ans.push_back(i.first);
	return ans;
}