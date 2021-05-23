class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> ans;
        int i=0,j=1,sum=INT_MIN;
        bool flag = false;
        for(;i<numbers.size()-1;i++){
            while(sum < target && j < numbers.size()){
                flag = true;
                sum = numbers[i] + numbers[j]; 
                j++;      
            }
            if(flag) {
                flag = false;
                j--;
            }
            while(sum > target && j >= 0) {
                flag = true;
                sum = numbers[i] + numbers[j];
                j--;
            }  
            if(flag) {
                flag = false;
                j++;
            }
            if(sum == target){
                ans.push_back(i+1);
                ans.push_back(j+1);
                return ans;
            }
        }
        return ans;
    }
};