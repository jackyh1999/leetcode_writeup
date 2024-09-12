vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
	vector<vector<int>> ans;
	sort(arr.begin(), arr.end());
	int min_diff = INT_MAX;
	for(int i=1; i<arr.size(); i++) min_diff = min(min_diff, arr[i]-arr[i-1]);
	for(int i=1; i<arr.size(); i++){
		if(arr[i]-arr[i-1] == min_diff){
			vector<int> vec{arr[i-1], arr[i]};
			ans.push_back(vec);
		}
	}
	return ans;
}