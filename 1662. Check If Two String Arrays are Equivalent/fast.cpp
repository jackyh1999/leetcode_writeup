bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
	int i = 0, j = 0, m = 0, n = 0, size1 = word1.size(), size2 = word2.size();
	while(i != size1 && m != size2){
		if(word1[i][j] != word2[m][n]) return false;
		else{
			j++; 
			n++;
		}            
		if(j == word1[i].length()){
			j = 0;
			i++;
		}
		if(n == word2[m].length()){
			n = 0;
			m++;
		}
	}
	if(i != size1 || m != size2) return false;
	return true;
}