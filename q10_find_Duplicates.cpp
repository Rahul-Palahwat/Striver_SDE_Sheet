#include <bits/stdc++.h>

int findDuplicate(vector<int> &arr, int n){
	// Write your code here.
	vector<bool> vec(n+1 , false);
	for(auto it: arr){
		if(vec[it] == true){
			return it;
		}
		vec[it] = true;
	}
	return -1;
	
}
