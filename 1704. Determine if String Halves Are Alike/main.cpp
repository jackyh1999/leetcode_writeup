bool halvesAreAlike(string s) {
	unordered_set<char> vowels = {'a','e','i','o','u'};
	int cnt = 0;
	for(int i=0;i<s.length()/2;i++) 
		if(vowels.count(tolower(s[i]))) cnt++;
	for(int i=s.length()/2;i<s.length();i++) 
		if(vowels.count(tolower(s[i]))) cnt--;
	if(!cnt) return true;
	return false;
}