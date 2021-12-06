bool canBeEqual(vector<int>& target, vector<int>& arr) {
	int myarr1[1001] = {}, myarr2[1001] = {};
	for(int i=0;i<arr.size();i++) myarr1[arr[i]]++;
	for(int i=0;i<target.size();i++) myarr2[target[i]]++;
	for(int i=0;i<1001;i++) 
		if(myarr1[i] != myarr2[i]) return false;
	return true;
}