    bool canMakeArithmeticProgression(vector<int>& arr) {
        unordered_set myset(arr.begin(), arr.end());
        int max_num = *max_element(arr.begin(), arr.end());
        int min_num = *min_element(arr.begin(), arr.end());
        int diff = (max_num - min_num) / (arr.size()-1);
        for(int i=0; i<arr.size(); i++)
            if(!myset.count(min_num+diff*i)) return false;
        return true;
    }