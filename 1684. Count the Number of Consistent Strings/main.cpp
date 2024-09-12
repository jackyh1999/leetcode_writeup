int countConsistentStrings(string allowed, vector<string>& words) {
	int consistent = 0;
	bool flag;
	unordered_set<char> myset;
	for(int i=0;i<allowed.length();i++) myset.insert(allowed[i]);
	for(int i=0;i<words.size();i++){
		flag = true;
		for(int j=0;j<words[i].length();j++){
			if( !myset.count(words[i][j]) ){
				flag = false;
				break;
			}
		}
		if(flag) consistent++;
	}
	return consistent;
}