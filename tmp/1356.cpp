vector<int> sortByBits(vector<int>& arr) {
	vector<int> ans;
	vector<int> bit_bucket[15] = {};
	for(auto& num : arr){
		int bit = 0, tmp = num;
		while(tmp > 0){
			if(tmp % 2 == 1) bit++;
			tmp /= 2;
		}
		bit_bucket[bit].push_back(num);
	}
	for(auto& vec : bit_bucket) sort(vec.begin(), vec.end());
	for(auto& vec : bit_bucket)
		for(auto num : vec) 
			ans.push_back(num);              
	return ans;
}