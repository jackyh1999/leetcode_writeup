int minCostToMoveChips(vector<int>& position) {
	int cost[2] = {};
	for(auto& chip : position) cost[chip%2]++;
	return min(cost[0],cost[1]);
}