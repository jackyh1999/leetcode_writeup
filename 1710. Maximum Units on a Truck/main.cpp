int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
	int unit = 0;
	sort(boxTypes.begin(), boxTypes.end(),
		[] (vector<int> &a, vector<int> &b){ return a[1] > b[1]; });
	for(auto& type: boxTypes){
		if(type[0] <= truckSize){
			unit += type[0] * type[1];
			truckSize -= type[0];
		}
		else if(type[0] > truckSize){
			unit += truckSize * type[1];
			break;
		}        
	}
	return unit;
}