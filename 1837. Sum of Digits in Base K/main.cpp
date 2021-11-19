int sumBase(int n, int k) {
	int sum = 0, pow = 1, quo;
	while(pow*k <= n) pow *= k;
	while(n > 0){
		quo = n/pow;
		sum += quo;
		n -= quo*pow;
		pow /= k;          
	}
	return sum;
}