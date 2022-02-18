vector<string> findWords(vector<string>& words) {
	vector<string> ans;
	unordered_map<char,int> mymap;
	string row1 = "qwertyuiop";
	string row2 = "asdfghjkl";
	string row3 = "zxcvbnm";
	
	for(int i=0;i<row1.length();i++) mymap[row1[i]]=1;
	for(int i=0;i<row2.length();i++) mymap[row2[i]]=2;
	for(int i=0;i<row3.length();i++) mymap[row3[i]]=3;
	
	for(int i=0;i<words.size();i++){
		int row_num = mymap[tolower(words[i][0])];
		bool flag = true;
		for(int j=0;j<words[i].length();j++){
			if( mymap[tolower(words[i][j])] != row_num ){
				flag = false;
				break;
			}
		}
		if(flag) ans.push_back(words[i]);
	}
	
	return ans;
}