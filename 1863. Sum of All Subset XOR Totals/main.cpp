public:
    int subsetXORSum(vector<int>& nums) {                     
        findSubset(nums, subset, 0);
        return ans;
    }
    
    void findSubset(vector<int>& nums, vector<int>& subset, int index){
        ans += XOR(subset);
        for(int i=index;i<nums.size();i++){
            subset.push_back(nums[i]);
            findSubset(nums, subset, i+1);
            subset.pop_back();
        }    
    }
    
    int XOR(vector<int>& subset){
        int tmp = 0;
        for(int i=0;i<subset.size();i++) tmp ^= subset[i];
        return tmp;
    }
    
private:
    int ans = 0;
    vector<int> subset;