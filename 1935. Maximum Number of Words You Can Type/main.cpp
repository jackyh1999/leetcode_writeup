int canBeTypedWords(string text, string brokenLetters) {
	int ans = 0, len = text.length();
	bool broken = false;
	unordered_set<char> brokenSet;
	for(int i=0;i<brokenLetters.length();i++) brokenSet.insert(brokenLetters[i]);
	for(int i=0;i<len;i++){
		if(brokenSet.count(text[i]) > 0){
			broken = true;
			while(i < len-1 && text[i] != ' ') i++;
		}
		if(i == len-1 || text[i] == ' '){
			if(broken) broken = !broken;
			else ans++;
		}
	}
	return ans;
}