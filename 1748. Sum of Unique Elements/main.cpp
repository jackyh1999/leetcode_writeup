int sumOfUnique(vector<int>& nums) {
	int ans = 0, size = nums.size();
	unordered_map<int, int> mymap;
	unordered_map<int, int>::iterator it;
	for(int i=0;i<size;i++) mymap[nums[i]]++;
	for(it=mymap.begin();it!=mymap.end();it++)
		if(it->second == 1) ans += it->first;
	return ans;
}