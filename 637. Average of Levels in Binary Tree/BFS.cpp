class Solution {
public:
    vector<double> averageOfLevels(TreeNode* root) {       
        queue<TreeNode*> q;
        vector<double> ans;
        q.push(root);
        while(!q.empty()){
            double sum = 0;
            int s = q.size();          
            for(int i=0;i<s;i++){
                TreeNode* node = q.front();
                q.pop();
                if(node->left) q.push(node->left);
                if(node->right) q.push(node->right);
                sum += node->val;
            }
            ans.push_back(sum/s);
        }
        return ans;
    }
};