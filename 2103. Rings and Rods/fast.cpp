int countPoints(string rings) {
	int ans = 0;
	int rods[10] = {0};
	for(int i=0; i<rings.length(); i+=2)
		rods[rings[i+1]-'0'] |= ( rings[i] == 'R' ? 1 : rings[i] == 'G' ? 2 : 4 );
	for(int i=0; i<10; i++)
		if(rods[i] == 7) ans++;
	return ans;
}