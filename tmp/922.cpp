vector<int> sortArrayByParityII(vector<int>& nums) {
	for(int i=0; i<nums.size(); i++){
		if(nums[i] % 2 != i % 2){
			int j = i + 1;
			while(nums[j] % 2 == j % 2) j+=2;
			int tmp = nums[i];
			nums[i] = nums[j];
			nums[j] = tmp;
		}
	}
	return nums;
}