int sumOddLengthSubarrays(vector<int>& arr) {
	int ans = 0, n = arr.size();
	for(int i=0;i<n;i++){
		int j = ((i+1)*(n-i)+1)/2;
		ans += arr[i]*j;
	}
	return ans;
}