int largestAltitude(vector<int>& gain) {
	int highest = 0, point = 0;
	for(int i=0;i<gain.size();i++){
		point += gain[i];
		if(point > highest) highest = point;
	}
	return highest;
}