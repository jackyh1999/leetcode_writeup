class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        if (nums.size() == 0) return 0;
        int i = 0;
        int j = nums.size()-1;
        while (i <= j) {
            while (i < nums.size() && nums[i] != val) i++;
            while (j >= 0 && nums[j] == val) j--;
            if (i < j) {
                swap(nums[i], nums[j]);
                i++; j--;
            }
        }
        return i;
    }
};