class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        invert(root);
        return root;
    }
    
    void invert(TreeNode* node){
        if(!node) return;
        TreeNode* tmp = node->left;
        node->left = node->right;
        node->right = tmp;
        invert(node->left);
        invert(node->right);
    }
};