class Solution {
public:
    int countBinarySubstrings(string s) {    
        int ans = 0;
        for(int i=0;i<s.length()-1;i++){
            int countA = 0, countB = 0;
            char tmp = s[i];
            bool swap = false;
            for(int j=i;j<s.length();j++){
                if(s[j] == tmp) {
                    if(swap) break;
                    countA++;
                }
                else {
                    swap = true;
                    countB++;
                }
                if(countA == countB){
                    ans += countA;
                    i += countA-1;
                    break;
                }
            }
            if(countA > s.length()/2) i += countA-s.length()/2-1;
            if(countB > s.length()/2) i += countB-s.length()/2-1;
        }
        return ans;
    }
};