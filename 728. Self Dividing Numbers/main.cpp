vector<int> selfDividingNumbers(int left, int right) {
	vector<int> ans;
	for(int i=left;i<=right;i++){
		bool flag = true;
		int tmp = i;
		while(tmp > 0){
			int bit = tmp % 10;
			if(bit == 0 || i % bit != 0){
				flag = false;
				break;
			}
			tmp /= 10;
		}
		if(flag) ans.push_back(i);
	}
	return ans;
}