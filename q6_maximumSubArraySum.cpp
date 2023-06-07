#include <bits/stdc++.h> 

// Recursion + Memoization
// long long solve(int index , bool check , int arr[],vector<vector<int>> &dp){
//     if(index < 0){
//         return 0;
//     }
//     if(dp[index][check] != -1){
//         return dp[index][check];
//     }
//     long long ans = 0;
//     if(check){
//         ans = max(arr[index]+solve(index-1 , check , arr , dp) , 0*1LL);
//     }else{
//         ans = max(arr[index]+solve(index-1 , true , arr , dp) , solve(index-1 , check , arr , dp));
//     }
//     return dp[index][check] = ans;
// }
// long long maxSubarraySum(int arr[], int n)
// {
//     vector<vector<int>> dp(n , vector<int>(2,-1));
//     return solve(n-1 , false , arr , dp);
//     /*
//         Don't write main().
//         Don't read input, it is passed as function argument.    
//         No need to print anything.
//         Taking input and printing output is handled automatically.
//     */
// }



// Tabulation + 1D DP 
long long maxSubarraySum(int arr[], int n)
{
    vector<long long> dp(n,0);
    dp[0] = (long long)arr[0];
    long long ans = 0;
    for(int i=1;i<n;i++){
        if(arr[i] > arr[i]+dp[i-1]){
            dp[i] = arr[i];
        }else{
            dp[i] = arr[i]+dp[i-1];
        }
        if(dp[i] > ans){
            ans = dp[i];
        }
    }
    return ans;
    /*
        Don't write main().
        Don't read input, it is passed as function argument.    
        No need to print anything.
        Taking input and printing output is handled automatically.
    */
}