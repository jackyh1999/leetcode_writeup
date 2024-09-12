bool checkString(string s) {
	char tmp = 'a';
	for(auto ch : s){
		if(ch == 'a' && tmp == 'b') return false;
		tmp = ch;
	}
	return true;
}