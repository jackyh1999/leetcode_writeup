string mergeAlternately(string word1, string word2) {
	string ans = "";
	int index1 = 0, index2= 0, len1 = word1.length(), len2 = word2.length();
	while(index1 < len1 || index2 < len2){
		if(index1 < len1) ans += word1[index1++];
		if(index2 < len2) ans += word2[index2++];  
	}
	return ans;
}