class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set<int> myset;
        for(int i=0;i<nums.size();i++){
            if(myset.count(nums[i]) == 0) myset.insert(nums[i]);
            else return true;
        }
        return false;
    }
};