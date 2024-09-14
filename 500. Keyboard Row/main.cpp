vector<string> findWords(vector<string>& words) {
	vector<string> ans;
	set row1 = {'q','w','e','r','t','y','u','i','o','p'};
	set row2 = {'a','s','d','f','g','h','j','k','l'};
	set row3 = {'z','x','c','v','b','n','m'};
	set<int> myset;
	
	for(int i=0;i<words.size();i++){
		for(int j=0;j<words[i].length();j++){
			char ch = tolower(words[i][j]);
			if( row1.count(ch) != 0 ) myset.insert(1);
			else if( row2.count(ch) != 0 ) myset.insert(2);
			else myset.insert(3);
			if(myset.size() > 1) break;
			if(j == words[i].length()-1) ans.push_back(words[i]);
		}    
		myset.clear();
	}
	
	return ans;
}