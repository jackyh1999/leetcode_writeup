string sortString(string s) {
	string ans = "";
	map<char, int> mymap;
	map<char, int>::iterator it;
	map<char, int>::reverse_iterator rit;
	for(int i=0;i<s.length();i++) mymap[s[i]]++;
	while(!mymap.empty()){
		
		for(it=mymap.begin();it!=mymap.end();it++){
			ans += it->first;
			(it->second)--;
			if(it->second == 0) mymap.erase(it);
		}
		
		for(rit=mymap.rbegin();rit!=mymap.rend();rit++){
			ans += rit->first;
			(rit->second)--;
			if(rit->second == 0) mymap.erase(--rit.base());
		}
	}
	return ans;
}