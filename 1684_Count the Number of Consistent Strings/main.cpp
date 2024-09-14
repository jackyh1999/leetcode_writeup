class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        std::set<char> myset;
        int ans = 0;

        for (auto ch : allowed) myset.insert(ch);
        for (auto word : words) {
            bool valid = true;
            for (auto ch : word) {
                if (!myset.contains(ch)){
                    valid = false; break;
                }
            }
            if (valid) ans++;
        }

        return ans;
    }
};