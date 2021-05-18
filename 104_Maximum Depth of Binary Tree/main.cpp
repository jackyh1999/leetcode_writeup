class Solution {
public:
    int maxDepth(TreeNode* root) {
        if(!root) return 0;
        Depth(root, 1);
        return max_depth;
    }
    void Depth(TreeNode* node, int depth){
        if(depth > max_depth) max_depth = depth;
        if(node->left) Depth(node->left, depth+1);
        if(node->right) Depth(node->right, depth+1);
    }
private:
    int max_depth = -1;
};