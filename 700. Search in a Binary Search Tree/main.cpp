class Solution {
public:
    TreeNode* searchBST(TreeNode* root, int val) {
        if(!root) return nullptr;
        else if(val < root->val) return searchBST(root->left, val);
        else if(val > root->val) return searchBST(root->right, val);
        else return root;
    }
};