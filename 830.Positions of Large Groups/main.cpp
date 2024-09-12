class Solution {
public:
    vector<vector<int>> largeGroupPositions(string s) {
        vector<vector<int>> ans;
        int start = -1, end = -1;
        char temp = 'A';
        for(int i=0;i<s.length();i++){
            if( s[i] != temp) {
                if(end-start>=2){
                    vector<int> interval;
                    interval.push_back(start);
                    interval.push_back(end);
                    ans.push_back(interval);
                }
                temp = s[i];
                start = i;
            }
            else {
                end = i;
            }
        }
        if(end-start>=2){
            vector<int> interval;
            interval.push_back(start);
            interval.push_back(end);
            ans.push_back(interval);
        }
        return ans;
    }
};