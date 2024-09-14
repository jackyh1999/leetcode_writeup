class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char, int> mymap;
        map<char, int>::iterator it;
        for(int i=0;i<s.length();i++) mymap[s[i]]++;
        for(int i=0;i<t.length();i++) mymap[t[i]]--;
        for(it=mymap.begin(); it!=mymap.end(); it++){
            if(it->second!=0) return false;
        }
        return true;
    }
};