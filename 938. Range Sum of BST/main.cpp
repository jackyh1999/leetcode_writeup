public:
    int rangeSumBST(TreeNode* root, int low, int high) {       
        if(root->left && root->val > low) rangeSumBST(root->left, low, high);
        if(root->right && root->val < high) rangeSumBST(root->right, low, high);
        if(root->val >= low && root->val <= high) sum += root->val;
        return sum;
    }    
private:
    int sum = 0;