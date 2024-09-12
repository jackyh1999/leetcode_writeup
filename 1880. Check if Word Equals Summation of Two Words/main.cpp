bool isSumEqual(string firstWord, string secondWord, string targetWord) {
	string letter_val1 = "", letter_val2 = "", letter_val3 = "";       
	for(int i=0;i<firstWord.length();i++) letter_val1 += firstWord[i]-'a'+'0';
	for(int i=0;i<secondWord.length();i++) letter_val2 += secondWord[i]-'a'+'0';
	for(int i=0;i<targetWord.length();i++) letter_val3 += targetWord[i]-'a'+'0';
	if(stoi(letter_val1) + stoi(letter_val2) == stoi(letter_val3)) return true;
	return false;
}