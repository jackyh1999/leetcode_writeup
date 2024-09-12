bool checkIfPangram(string sentence) {
	unordered_set<char> alphabet;
	for(int i=0;i<sentence.length();i++) alphabet.insert(sentence[i]);
	if(alphabet.size() == 26) return true;
	return false;
}