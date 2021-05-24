class Solution {
public:
    vector<double> averageOfLevels(TreeNode* root) {       
        DFS(root, 0);
        for(int i=0;i<sum.size();i++){
            ans.push_back(sum[i]/count[i]);
        } 
        return ans;
    }
    
private:
    map<int, int> count;
    map<int, double> sum;
    vector<double> ans;
    void DFS(TreeNode* node, int level){
        if(!node) return;
        sum[level] += node->val;
        count[level] ++;
        DFS(node->left, level+1);
        DFS(node->right, level+1); 
    }
    
};