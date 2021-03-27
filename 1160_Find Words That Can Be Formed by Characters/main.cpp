class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        unordered_map<char, int> mymap;
        int len = 0;
        for(int i=0;i<chars.length();i++){
            if(!mymap.count(chars[i])) mymap[chars[i]] = 1;
            else mymap[chars[i]] += 1;
        }     
        for(int i=0;i<words.size();i++){
            unordered_map<char, int> tmp = mymap;
            for(int j=0;j<words[i].length();j++){
                if(tmp.count(words[i][j]) && tmp[words[i][j]]>0) tmp[words[i][j]]--;
                else break;
                if(j==words[i].length()-1) len += words[i].length();
            }
        }
        return len;
    }
};