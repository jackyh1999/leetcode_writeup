class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {  
        if(mat.size()*mat[0].size() != r*c) return mat;
        vector<vector<int>> ans;
        vector<int> v;
        for(int i=0;i<mat.size();i++){
            for(int j=0;j<mat[i].size();j++){
                if(v.size() < c){
                    v.push_back(mat[i][j]);
                }
                if(v.size() == c){
                    ans.push_back(v);
                    v.clear();
                }
            }
        }
        return ans;
    }
};