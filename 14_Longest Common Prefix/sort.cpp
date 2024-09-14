class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans = "";

        sort(strs.begin(), strs.end());
        string str1 = strs[0];
        string str2 = strs[strs.size()-1];
        int n = min(str1.length(), str2.length());
        for (int i = 0; i < n; i++) {
            if (str1[i] == str2[i]) ans += str1[i];
            else return ans;
        }

        return ans;
    }
};