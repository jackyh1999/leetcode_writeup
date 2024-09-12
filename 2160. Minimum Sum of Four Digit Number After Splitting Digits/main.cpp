int minimumSum(int num) {
	int ans = 0;
	vector<int> vec;
	while(num > 0){
		vec.push_back(num % 10);
		num /= 10;
	}
	sort(vec.begin(), vec.end());
	return (vec[0] + vec[1]) * 10 + vec[2] + vec[3];
}