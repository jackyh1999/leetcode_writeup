vector<int> sumZero(int n) {
	vector<int> ans;
	if(n % 2 == 1){
		ans.push_back(0);
		n--;
	}
	for(int i=1;i<n/2+1;i++){
		ans.push_back(i);
		ans.push_back(i*(-1));
	}
	return ans;
}