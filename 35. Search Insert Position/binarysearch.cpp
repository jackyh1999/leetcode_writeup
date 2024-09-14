class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int l = 0, r = nums.size(), m;
        if (target > nums[r-1]) return r;
        if (target < nums[l]) return l;
        while (l <= r) {
            m = (l+r)/2;
            if (nums[m] == target) return m;
            if (target < nums[m]) r = m-1;
            else l = m+1;
        }        
        return l;
    }
};