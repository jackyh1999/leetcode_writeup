public:
    TreeNode* increasingBST(TreeNode* root) {       
        new_root = new TreeNode;
        TreeNode* tmp = new_root;        
        inorder(root);
        return tmp->right;
    }
    
    void inorder(TreeNode* node){
        if(node->left) inorder(node->left);
        TreeNode* new_node = new TreeNode(node->val);  
        new_root->right = new_node;
        new_root = new_root->right;
        if(node->right) inorder(node->right);
    } 
        
private:
    TreeNode* new_root;