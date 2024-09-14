int findComplement(int num) {
	long ans = num, sum = 1;
	while(sum <= ans) sum *= 2;
	sum--;
	return (int)(sum - ans);
}