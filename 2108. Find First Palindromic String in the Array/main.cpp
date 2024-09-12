string firstPalindrome(vector<string>& words) {
	for(auto& word : words){
		int i = 0, j = word.length()-1;
		bool palindrome = true;
		while(i <= j){
			if(word[i] == word[j]){
				i++; 
				j--;
			}
			else{
				palindrome = false;
				break;
			}
		}
		if(palindrome) return word;
	}
	return "";
}