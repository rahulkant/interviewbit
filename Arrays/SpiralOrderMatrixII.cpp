vector<vector<int> > Solution::generateMatrix(int A) {
	vector<vector<int> > ans(A, vector<int> (A));
	int row=0, col=0, layer=0, key=1, rows=A, cols=A;
	ans[0][0] = key;
	int dir = 1;
	for(int step=1; step<cols*rows; step++){
		switch(dir){
			case 1:
				if(col == cols-layer-1)
				{
					row++;
					dir = 2;
				}
				else col++;
				break;
			case 2:
				if(row == rows-layer-1)
				{
					col--;
					dir = 3;
				}
				else row++;
				break;
			case 3:
				if(col == layer)
				{
					row--;
					dir = 4;
				}
				else col--;
				break;
			case 4:
				if(row == layer+1)
				{
					col++;
					dir = 1;
					layer++;
				}
				else row--;
				break;
		}
		ans[row][col] = ++key;
	}
	return ans;
}