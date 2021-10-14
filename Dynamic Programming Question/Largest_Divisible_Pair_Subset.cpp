#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

// This solution is based on longest increasing sunsequence, here after sorting we have to find the longest length with that element as the smallest one.

int solve(vector<int>arr, int n){
    vector<int>dp(n,1);
    int ans=1;
    
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[j]%arr[i]==0 && dp[j]<dp[i]+1){
                dp[j]=dp[i]+1;
                ans=max(ans,dp[j]);
            }
        }
    }
    return ans;
}

int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    int n;
    cin>>n;
    vector<int>arr(n,0);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr.begin(),arr.end());
    cout<<solve(arr,n);
    return 0;
}