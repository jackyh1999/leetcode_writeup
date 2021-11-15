vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
	int size = image.size();
	for(int i=0;i<size;i++){
		for(int j=0;j<size/2;j++){
			int tmp = image[i][j];
			image[i][j] = image[i][size-1-j];
			image[i][size-1-j] = tmp;
		}
		for(int j=0;j<size;j++){
			if(image[i][j]==0) image[i][j] = 1;
			else image[i][j] = 0;
		}
	}
	return image;
}