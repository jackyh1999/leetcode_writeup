class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int i = digits.size()-1;
        while(i >= 0) {
            if (digits[i] < 9) {
                digits[i]++; 
                return digits;
            }
            else {
                digits[i] = 0;
                i--;
            }
        }
        vector<int> myvec(digits.size()+1, 0);
        myvec[0] = 1;
        return myvec;
    }
};