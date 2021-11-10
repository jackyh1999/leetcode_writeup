string sortSentence(string s) {
	string ans = "";
	string words[10];
	int start_index = 0, cnt = 0;
	for(int i=0;i<s.length();i++){
		if(s[i]>='0' && s[i]<='9') {
			cnt++;
			string subs = s.substr(start_index, i-start_index);
			words[s[i]-'0'] = subs;
			if(i != s.length()-1) start_index = i+2;
		}
	}
	for(int i=1;i<=cnt;i++){
		if(i!=1) ans += " ";
		ans += words[i];
	}
	return ans;
}