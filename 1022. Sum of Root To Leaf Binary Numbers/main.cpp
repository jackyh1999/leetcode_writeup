private:
    int sum = 0;
    
public:
    int sumRootToLeaf(TreeNode* root) {
        vector<int> path;
        recc(root, path);
        return sum;
    }
    
    void recc(TreeNode* node, vector<int> path){
        path.push_back(node->val);
        if(node->left) recc(node->left, path);
        if(node->right) recc(node->right, path);
        if(node->left == nullptr && node->right == nullptr) sum += evalBinary(path);         
    }
    
    int evalBinary(vector<int> path){
        int ret = 0, pow = 1;
        while(!path.empty()){
            ret += pow * path.back();
            path.pop_back();
            pow *= 2;
        }
        return ret;
    }