class Solution {
public:
    int maxDepth(Node* root) {
        if(!root) return 0;
        DFS(root, 1);
        return max;
    }
    
    void DFS(Node* node, int depth){
        if(depth > max) max = depth;
        if(node == NULL) return;
        for(int i=0;i<(node->children).size();i++){
            DFS( (node->children)[i], depth+1 ); 
        }
    }
    
private:
    int max = -1;
};