class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        bitset<200001> hash;
        int count = 0;
        for (int i : candyType) {
            if (!hash.test(i+100000)) {
               count++;
               hash.set(i+100000);
            }
        }
        return min(count, candyType.size()/2);
    }
};