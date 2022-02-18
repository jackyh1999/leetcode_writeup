int countPoints(string rings) {
	int ans = 0;
	int rods[10][3] = {0};
	for(int i=0; i<rings.length(); i+=2){
		if(rings[i] == 'R'){
			rods[ rings[i+1] - '0' ][0] = 1; 
		}
		else if(rings[i] == 'G'){
			rods[ rings[i+1] - '0' ][1] = 1; 
		}
		else if(rings[i] == 'B'){
			rods[ rings[i+1] - '0' ][2] = 1;   
		}
	}
	for(int i=0; i<10; i++)
		if(rods[i][0] && rods[i][1] && rods[i][2]) ans++;
	return ans;
}