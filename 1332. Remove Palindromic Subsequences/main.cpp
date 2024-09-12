int removePalindromeSub(string s) {
	int cnt = 0;  
	int left = 0, right = s.length()-1;  
	while(left < right){
		if(s[left] == s[right]){
			left++; right--;
		}
		else return 2;              
	}
	return 1;
}