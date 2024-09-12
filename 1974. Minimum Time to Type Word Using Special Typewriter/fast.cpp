int minTimeToType(string word) {
	int sec = word.size();
	char curr = 'a';
	for(auto ch: word){
		sec += min(26-abs(ch-curr), abs(ch-curr));  
		curr = ch;
	}
	return sec;
}