vector<int> luckyNumbers (vector<vector<int>>& matrix) {
	vector<int> ans;
	for(int i=0; i<matrix.size(); i++) {
		int min_num = INT_MAX, min_row, min_col;
		for(int j=0; j<matrix[i].size(); j++){
			if(matrix[i][j] < min_num){
				min_num = matrix[i][j];
				min_row = i;
				min_col = j;
			}
		}
		
		int max_num = INT_MIN, max_row;
		for(int k=0; k<matrix.size(); k++){
			if(matrix[k][min_col] > max_num){
				max_num = matrix[k][min_col];
				max_row = k;
			}
		}
		
		if(min_row == max_row){
			ans.push_back(matrix[min_row][min_col]);
			return ans;
		}
	}
	return ans;
}