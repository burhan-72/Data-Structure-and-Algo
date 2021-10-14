#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int numberOfPossibleCoinChange(vector<int>arr,int n,int sum){
    int dp[n+1][sum+1];
    memset(dp,0,sizeof(dp));
    
    for(int i=0;i<=n;i++){
        for(int j=0;j<=sum;j++){
            if(j==0){
                dp[i][j]=1;
            }else if(i==0){
                dp[i][j]=0;
            }
            else{
                if(coins[i-1]>j){
                    dp[i][j]=dp[i-1][j];
                }else{
                    dp[i][j]=dp[i-1][j];
                    dp[i][j]+=(dp[i][j-coins[i-1]]+1);
                }
            }
        }
    }
    return dp[n][sum];
}

int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int sum,m;
    cin<<sum<<m;
    vector<int>arr(m,0);
    for(int i=0;i<m;i++){
        cin<<arr[i];
    }
    cout<<numberOfPossibleCoinChange(arr,m,sum);
    return 0;
}