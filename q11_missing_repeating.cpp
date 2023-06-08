#include <bits/stdc++.h>

pair<int,int> missingAndRepeating(vector<int> &arr, int n)
{
	// Write your code here 
	vector<bool> vec(n+1 , false);
	int repeat , missing;
	for(auto it: arr){
		if(vec[it]){
			repeat = it;
		}
		vec[it]=true;
	}
	for(int i=1;i<n+1;i++){
		if(!vec[i]){
			missing = i;
			break;
		}
	}
	return {missing , repeat};
}
