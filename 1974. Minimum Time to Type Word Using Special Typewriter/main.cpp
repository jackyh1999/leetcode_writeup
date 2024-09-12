int minTimeToType(string word) {
	int sec = 0;
	char curr = 'a';
	for(int i=0;i<word.length();i++){
		int dist = abs(word[i]-curr);
		sec += dist > 13 ? 26 - dist + 1: dist + 1;  
		curr = word[i];
	}
	return sec;
}