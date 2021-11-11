int numberOfMatches(int n) {
	int match = 0;
	while(n > 1){
		if(n % 2 == 0){
			n /= 2;
			match += n;
		}
		else{
			match += n / 2;
			n = n / 2 + 1;
		}
	}
	return match;
}