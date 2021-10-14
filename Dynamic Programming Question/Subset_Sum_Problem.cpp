#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

bool subsetSum(vector<int>arr,int sum){
    int n=arr.size();
    bool dp[n+1][sum+1];
    memset(dp,0,sizeof(dp));
    for(int i=0;i<n+1;i++){
        for(int j=0;j<sum+1;j++){
            if(j==0){
                dp[i][j]=true;
            }
            else if(i==0){
                dp[i][j]=false;
            }
            else if(arr[i-1]>j){
                dp[i][j]=dp[i-1][j];
            }
            else{
                dp[i][j]=dp[i-1][j]||dp[i-1][j-arr[i-1]];
            }
        }
    }
    return dp[n][sum];
}

int main(){
    vector<int>arr{11,9,3,1,4,15,7};
    int sum=2;
    cout<<subsetSum(arr,sum);
    return 0;
}