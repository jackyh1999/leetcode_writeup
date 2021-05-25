class Solution {
public:
    bool hasAlternatingBits(int n) {
        int bit;
        while(n > 0){
            if(bit == n % 2) return false;
            else bit = n % 2;
            n /= 2;
        }
        return true;
    }
};