vector<int> replaceElements(vector<int>& arr) {
	int max_num = -1;
	for(int i=arr.size()-1;i>=0;i--) max_num = max(max_num, exchange(arr[i], max_num));   
	return arr;
}