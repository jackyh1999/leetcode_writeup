string reversePrefix(string word, char ch) {
	for(int i=0;i<word.length();i++){
		if(word[i]==ch){
			string tmp_str = word.substr(0,i+1);
			for(int j=0;j<=i;j++) word[j] = tmp_str[i-j];
			break;
		}
	}
	return word;
}