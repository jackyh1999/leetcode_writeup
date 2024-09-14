class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        if(!root) return ans;
        ans.push_back(root->val);
        preorderTraversal(root->left);
        preorderTraversal(root->right);
        return ans;
    }
private:
    vector<int> ans;
};