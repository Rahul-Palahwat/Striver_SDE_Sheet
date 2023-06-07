#include <bits/stdc++.h>

void setZeros(vector<vector<int>> &matrix)
{
	// Write your code here.
	set<int> row , col;
	for(int i=0;i<matrix.size();i++){
		for(int j=0;j<matrix[0].size();j++){
			if(matrix[i][j] == 0){
				row.insert(i);
				col.insert(j);
			}
		}
	}
	for(auto it: row){
		for(int i=0;i<matrix[0].size();i++){
			matrix[it][i] = 0;
		}
	}
	for(auto it: col){
		for(int i=0;i<matrix.size();i++){
			matrix[i][it] = 0;
		}
	}
	return;
}