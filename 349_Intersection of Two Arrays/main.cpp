class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int> myset;
        vector<int> ans;
        for(int i=0;i<nums1.size();i++){
            myset.insert(nums1[i]);
        }
        for(int i=0;i<nums2.size();i++){
            if(myset.count(nums2[i]) != 0){
                myset.erase(nums2[i]);
                ans.push_back(nums2[i]);
            }
        }
        return ans;
    }
};