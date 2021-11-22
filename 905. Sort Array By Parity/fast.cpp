vector<int> sortArrayByParity(vector<int>& nums) {
	int size = nums.size();
	int i = 0, j = size - 1;
	while(1){
		while(i < size && nums[i] % 2 == 0) i++;
		while(j > 0 && nums[j] % 2 == 1) j--;
		if(i >= j) break;
		else{
			int tmp = nums[i];
			nums[i] = nums[j];
			nums[j] = tmp;
		}
	}
	return nums;
}