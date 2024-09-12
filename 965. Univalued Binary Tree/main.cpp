bool isUnivalTree(TreeNode* root) {        
	if(!root) return true;
	bool isUnival = true;
	if(root->left) isUnival &= (root->val == root->left->val);
	if(root->right) isUnival &= (root->val == root->right->val);
	return isUnival && isUnivalTree(root->left) && isUnivalTree(root->right);
}