vector<int> replaceElements(vector<int>& arr) {
	int max = -1;
	for(int i=arr.size()-1;i>=0;i--) arr[i] = arr[i] > max ? exchange(max, arr[i]) : max;   
	return arr;
}