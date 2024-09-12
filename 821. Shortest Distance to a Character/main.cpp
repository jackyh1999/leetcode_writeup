vector<int> shortestToChar(string s, char c) {
	vector<int> ans;
	int left = -1000000, right = 0;
	while(s[right] != c) right++;
	for(int i=0; i<s.length(); i++){
		ans.push_back(min(abs(i-left), abs(i-right)));
		if(s[i] == c){
			left = i;
			right++;
			while(s[right] != c && right < s.length()) right++;
			if(right == s.length()) right = INT_MAX;
		}
	}
	return ans;
}