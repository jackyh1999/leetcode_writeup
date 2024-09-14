class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        std::bitset<26> bs;
        int ans = 0;

        for (auto ch : allowed) bs[ch-'a'] = 1;
        for (auto word : words) {
            bool consistent = true;
            for (auto ch : word) {
                if (bs[ch-'a'] == 0){
                    consistent = false; break;
                }
            }
            if (consistent) ans++;
        }

        return ans;
    }
};