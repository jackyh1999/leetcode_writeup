bool areOccurrencesEqual(string s) {
	unordered_map<char, int> mymap;
	unordered_map<char, int>::iterator it;        
	for(int i=0;i<s.length();i++) mymap[s[i]]++;
	
	int times = mymap.begin()->second;
	for(it=mymap.begin();it!=mymap.end();it++)
		if(it->second != times) return false;
	return true;
}