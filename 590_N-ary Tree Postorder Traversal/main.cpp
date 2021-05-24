class Solution {
public:
    vector<int> postorder(Node* root) {
        if(root == nullptr) return ans;
        recursive(root);
        return ans;
    }
    
    void recursive(Node* node){     
        for(auto child : node->children) recursive(child);    
        ans.push_back(node->val);
    }
    
private:
    vector<int> ans;
};