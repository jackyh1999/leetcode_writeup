class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        set<int> myset;
        for(int i=0;i<candyType.size();i++) myset.insert(candyType[i]);     
        return min( myset.size(), candyType.size()/2 );
    }
};