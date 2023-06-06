#include <bits/stdc++.h> 
vector<int> nextPermutation(vector<int> &per, int n)
{
    //  Write your code here.
    vector<int> ans=per;
    int i=n-1;
    for(;i>0;i--){
        if(ans[i-1] < ans[i]){
            int temp = ans[i-1] , index=i;
            int diff = ans[i] - ans[i-1];
            for(int j=i;j<n;j++){
                // cout<<ans[j]<<" "<<diff<<" "<<ans[j]-temp<<endl;
                if(ans[j] > temp && (diff >= (ans[j]-temp))){
                    diff = (ans[j]-temp);
                    index = j;
                    // cout<<"HEllo"<<endl;
                }
            }
            // cout<<i<<" i "<<index<<" temp "<<temp<<" diff"<<diff<<endl;
            ans[i-1] = ans[index];
            ans[index] = temp;
            break;
        }
    }
    // cout<<i<<"i"<<endl;
    sort(ans.begin()+i,ans.end());
    return ans;
}