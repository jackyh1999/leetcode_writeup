class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int i=0, j=numbers.size()-1;
        while (numbers[i] + numbers[j] != target){
            if (numbers[i] + numbers[j] < target){
                i++;
            } 
            else {
                j--;
            }
        }
        return vector<int>( {i+1,j+1} );
    }
};