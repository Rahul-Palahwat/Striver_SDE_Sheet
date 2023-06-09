#include <bits/stdc++.h>

vector<int> majorityElementII(vector<int> &arr)
{
    // Write your code here.
    int n = arr.size();
    map<int,int> mp;
    vector<int> ans;
    for(auto it: arr){
        mp[it]++;
    }
    for(auto it: mp){
        if(it.second > n/3){
            ans.push_back(it.first);
        }
    }
    return ans;
}