vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
	vector<int> ans;
	unordered_map<int,int> mymap;
	int n = nums2.size();
	for(int i=0;i<n;i++) mymap[nums2[i]] = i;

	for(int i=0;i<nums1.size();i++){
		for(int j=mymap[nums1[i]]+1;j<n;j++){
			if(nums2[j]>nums1[i]){
				ans.push_back(nums2[j]);
				break;
			}
		}
		if(ans.size() < i+1) ans.push_back(-1);
	}
	return ans;
}