class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        for(int i=0;i<numRows;i++){
            vector<int> pascal;
            if(i==0){
                pascal.push_back(1);
            }
            else if(i==1){
                pascal.push_back(1);
                pascal.push_back(1);
            }
            else{
                pascal.push_back(1);
                for(int j=0;j<i-1;j++){
                    pascal.push_back( ans[i-1][j] + ans[i-1][j+1] );
                }
                pascal.push_back(1);
            }
            ans.push_back(pascal);
        }
        return ans;
    }
};