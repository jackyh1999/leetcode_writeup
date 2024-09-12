int balancedStringSplit(string s) {
	int ans = 0, cnt = 0;
	for(int i=0;i<s.length();i++){
		if(s[i] == 'R') cnt++;
		else cnt--;
		if(cnt == 0) ans++;
	}
	return ans;
}