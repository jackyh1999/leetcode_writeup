class Solution {
public:
    vector<int> preorder(Node* root) {
        if(root == nullptr) return ans;
        recursive(root);
        return ans;
    }
    
    void recursive(Node* node){
        ans.push_back(node->val);
        for(auto child : node->children) recursive(child);    
    }
    
private:
    vector<int> ans;
};