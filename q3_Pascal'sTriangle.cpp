#include <bits/stdc++.h>

vector<vector<long long int>> printPascal(int n) 
{
  // Write your code here.
  vector<vector<long long int>> ans;
  for(int i=0;i<n;i++){
    vector<long long int> temp;
    temp.push_back(1);
    if(i == 0){
      ans.push_back(temp);
      continue;
    }
    for(int j=0;j<ans[i-1].size()-1;j++){
      temp.push_back(ans[i-1][j]+ans[i-1][j+1]);
    }
    temp.push_back(1);
    ans.push_back(temp);
  }
  return ans;
}