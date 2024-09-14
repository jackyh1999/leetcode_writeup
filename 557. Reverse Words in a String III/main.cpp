class Solution {
public:
    string reverseWords(string s) {
        int start = 0, len = s.length();
        char tmp;
        for(int i=0;i<len;i++){
            if(s[i] == ' '){
                for(int j=0;j<(i-start)/2;j++){
                    tmp = s[start+j];
                    s[start+j] = s[i-j-1];
                    s[i-j-1] = tmp;
                }
                start = i+1;
            }
        }
        for(int j=0;j<(len-start)/2;j++){
            tmp = s[start+j];
            s[start+j] = s[len-j-1];
            s[len-j-1] = tmp;
        }
        return s;
    }
};