string generateTheString(int n) {
	return (n % 2) ? string(n,'a') : string(n-1,'a')+"b";
}