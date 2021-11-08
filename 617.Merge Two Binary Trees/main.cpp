class Solution {
public:
    TreeNode* mergeTrees(TreeNode* root1, TreeNode* root2) {
        if(!root1) return root2;
        if(!root2) return root1;
        TreeNode* tmp = root1;
        merge(root1, root2);
        return tmp;
    }
    
    void merge(TreeNode* node1, TreeNode* node2){
        node1->val += node2->val;
        if(!node1->left && node2->left) node1->left = node2->left;
        else if(node1->left && node2->left) merge(node1->left, node2->left);
        
        if(!node1->right && node2->right) node1->right = node2->right;
        else if(node1->right && node2->right) merge(node1->right, node2->right);
    }
    
};