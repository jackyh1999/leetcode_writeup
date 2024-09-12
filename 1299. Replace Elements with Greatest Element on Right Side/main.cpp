vector<int> replaceElements(vector<int>& arr) {
	vector<int> ans;
	int i, j;
	for(i=0;i<arr.size()-1;i++){
		ans.push_back(arr[i+1]);
		j = i-1;
		while(j >= 0 && ans[j] < ans[i]) ans[j--] = ans[i];
	}
	ans.push_back(-1);
	return ans;
}