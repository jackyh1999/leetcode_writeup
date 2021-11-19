string freqAlphabets(string s) {
	string ans = "";
	int i, tmp;
	for(i=0;i<s.length()-2;i++){
		if(s[i+2] == '#'){
			tmp = stoi(s.substr(i,2));    
			i += 2;
		}
		else tmp = s[i] - '0';             
		ans += ('a' + tmp - 1);
	}
	while(i < s.length()){
		tmp = s[i] - '0'; 
		ans += ('a' + tmp - 1);
		i++;
	}
	return ans;
}