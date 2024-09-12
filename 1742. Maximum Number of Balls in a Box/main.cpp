int countBalls(int lowLimit, int highLimit) {
	int box[50] = {};
	for(int i=lowLimit;i<=highLimit;i++){
		int tmp = i, sum = 0;
		while(tmp > 0){
			sum += tmp % 10;
			tmp /= 10;
		}
		box[sum]++;
	}
	return *(max_element(box, box+50));
}