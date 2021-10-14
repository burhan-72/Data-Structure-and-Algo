#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int minimunEditDistance(string a,string b){
    int n=a.length();
    int m=b.length();

    int dp[n+1][m+1];
    for(int i=0;i<n+1;i++){
        for(int j=0;j<m+1;j++){
            if(i==0){
                dp[i][j]=j;
            }
            else if(j==0){
                dp[i][j]=i;
            }
            else if(a[i]==b[j]){
                dp[i][j]=dp[i-1][j-1];
            }
            else{
                dp[i][j]=min(dp[i][j-1],min(dp[i-1][j],dp[i-1][j-1]))+1;
            }
        }
    }
    return dp[n][m];
}

int main(){
    string a="abc";
    string b="jab";
    cout<<minimunEditDistance(a,b);
    return 0;
}