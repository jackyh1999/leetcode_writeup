bool canBeEqual(vector<int>& target, vector<int>& arr) {
	int myarr[1001] = {};
	for(int i=0;i<arr.size();i++){
		myarr[arr[i]]++;
		myarr[target[i]]--;
	}
	for(auto i: myarr) 
		if(i > 0) return false;
	return true;
}