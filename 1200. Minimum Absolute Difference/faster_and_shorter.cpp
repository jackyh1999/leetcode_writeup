vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
	vector<vector<int>> ans;
	sort(arr.begin(), arr.end());
	int min_diff = INT_MAX;
	for(int i=1; i<arr.size(); i++){
		if(arr[i]-arr[i-1] < min_diff){
			ans.clear();
			min_diff = arr[i]-arr[i-1];
		}
		if(arr[i]-arr[i-1] == min_diff) ans.push_back({arr[i-1], arr[i]});    
	}
	return ans;
}