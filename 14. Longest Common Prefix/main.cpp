class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans = "";
        for (int i = 0; ; i++) {
            char tmp = '0';
            bool bflag = false;
            for (string s : strs) {
                if (s.length() == 0) return "";
                if (tmp != '0' && s[i] != tmp) return ans;
                else tmp = s[i];
                if (i == s.length()-1) bflag = true;
            }
            ans += tmp;
            if (bflag) break;
        }

        return ans;
    }
};