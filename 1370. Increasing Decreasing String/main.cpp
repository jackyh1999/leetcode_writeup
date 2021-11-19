string sortString(string s) {
	string ans = "";
	vector<int> alphabet(26, 0);
	int len = s.length();
	for(int i=0;i<len;i++) alphabet[s[i]-'a']++;
	while(len > 0){
		for(int i=0;i<26;i++){
			if(alphabet[i] > 0){
				ans += (i+'a');
				alphabet[i]--;
				len--;
			}
		}
		for(int i=25;i>=0;i--){
			if(alphabet[i] > 0){
				ans += (i+'a');
				alphabet[i]--;
				len--;
			}
		}
	}
	return ans;
}