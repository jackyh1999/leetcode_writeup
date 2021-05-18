class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int, int> mymap;
        map<int, int>::iterator iter;
        for(int i=0;i<nums.size();i++){
            mymap[nums[i]]++;
        }
        int max = -1, temp;
        for(iter = mymap.begin(); iter != mymap.end(); iter++){
            if(iter->second > max){
                temp = iter->first;
                max = iter->second;
            }
        }
        return temp;
    }
};