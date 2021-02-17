class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> input; 
        for(int i=0;i<nums.size();i++){
            int diff = target - nums[i];
            if(input.count(diff)) return {input[diff],i};
            else input[nums[i]] = i;
        }
        return {};
    }
};