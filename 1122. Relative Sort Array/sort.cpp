vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
	int curr = 0, i = 0, j = 0;
	while(j < arr2.size()){
		if(arr1[i] != arr2[j]) i++;     
		else{
			int tmp = arr1[i];
			arr1[i] = arr1[curr];
			arr1[curr] = tmp;
			curr++;
			i++;
		}
		if(i == arr1.size()){
			j++;
			i = curr;
		}
	}
	sort(arr1.begin()+curr, arr1.end());
	return arr1;
}