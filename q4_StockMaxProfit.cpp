#include <bits/stdc++.h> 
int maximumProfit(vector<int> &prices){
    // Write your code here.
    int maxi = INT_MIN,ans=0;
    for(int i = prices.size()-1;i>=0;i--){
        maxi = max(maxi , prices[i]);
        ans = max(ans , maxi - prices[i]);
    }
    return ans;
}