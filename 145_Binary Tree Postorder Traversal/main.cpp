/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<int> postorderTraversal(TreeNode* root) {
        if(!root) return ans;
        postorder(root);
        return ans;
    }
    void postorder(TreeNode* node){
        if(node->left) postorder(node->left);
        if(node->right) postorder(node->right);
        ans.push_back(node->val);
    }
private:
    vector<int> ans;
};