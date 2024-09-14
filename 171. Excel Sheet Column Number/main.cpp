class Solution {
public:
    int titleToNumber(string columnTitle) {
        int sum = 0, num, partial_sum;
        for(int i=0;i<columnTitle.length();i++){
            num = columnTitle[i] - 'A' + 1;
            partial_sum = 1;
            for(int j=1;j<columnTitle.length()-i;j++){
                partial_sum *= 26;
            }
            sum += num * partial_sum;
        }
        return sum;
    }
};