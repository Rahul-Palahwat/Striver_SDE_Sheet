#include <bits/stdc++.h> 
long long getInversions(long long *arr, int n){
    // Write your code here.
    long long ans = 0;
    for(int i=n-2;i>=0;i--){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                ans++;
            }
        }
    }
    return ans;
}