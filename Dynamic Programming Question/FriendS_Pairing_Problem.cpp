#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int possibleWays(int n){
    int dp[n+1];

    dp[0]=0,dp[1]=1,dp[2]=2;
    for(int i=3;i<=n;i++){
        dp[i]=dp[i-1]+((i-1)*dp[i-2]);
    }
    return dp[n];
}


int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int n;
    cout<<possibleWays(n);
    return 0;
}