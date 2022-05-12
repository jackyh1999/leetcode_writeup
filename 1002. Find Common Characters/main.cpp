vector<string> commonChars(vector<string>& words) {
	vector<string> ans;
	vector<int> common(26, 101);
	for(auto& word : words){
		vector<int> letter(26, 0);
		for(auto ch : word) letter[ch-'a']++; 
		for(int i=0; i<26; i++) common[i] = min(common[i], letter[i]);         
	}
	for(int i=0; i<26; i++){
		while(common[i]>0){
			ans.push_back(string(1,char('a'+i)));
			common[i]--;
		}
	}
	return ans;
}