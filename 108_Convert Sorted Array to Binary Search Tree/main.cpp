class Solution {
public:
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return DC(nums, 0, nums.size()-1);
    }
    TreeNode* DC(vector<int>& nums, int m, int n){
        TreeNode* node = new TreeNode();
        int mid = (m+n)/2;
        node->val = nums[mid];
        if(m!=mid) node->left = DC(nums, m, mid-1);
        if(n!=mid) node->right = DC(nums, mid+1, n);
        return node;
    }
};