int uniqueMorseRepresentations(vector<string>& words) {
	string morse_code[26] = {".-","-...","-.-.","-..",".","..-.","--.","....","..",
						 ".---","-.-",".-..","--","-.","---",".--.","--.-",".-.",
						 "...","-","..-","...-",".--","-..-","-.--","--.."};
	unordered_set<string> myset;
	for(int i=0;i<words.size();i++){
		string tmp = "";
		for(int j=0;j<words[i].length();j++){
			tmp += morse_code[words[i][j]-'a'];
		}
		myset.insert(tmp);
	}
	return myset.size();
}