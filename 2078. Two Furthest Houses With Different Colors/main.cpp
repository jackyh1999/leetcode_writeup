int maxDistance(vector<int>& colors) {
	int max_dist = 1;
	for(int i=colors.size()-1; i>0; i--){
		if(colors[i] != colors[0]) {
			max_dist = i;
			break;
		}       
	}     
	for(int i=0; i<colors.size()-1; i++){
		if(colors[i] != colors[colors.size()-1]) {
			max_dist = max(max_dist, (int)(colors.size()-1-i));
			break;
		}        
	}         
	return max_dist;
}