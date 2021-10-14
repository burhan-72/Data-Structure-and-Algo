#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int lcs(string a,string b){
    int n=a.length();
    int m=b.length();
    
    int dp[n+1][m+1];
    int ans=0;
    memset(dp,0,sizeof(dp));
    for(int i=0;i<n+1;i++){
        for(int j=0;j<m+1;j++){
            if(i==0||j==0){
                dp[i][j]=0;
            }
            else if(a[i]==b[j]){
                dp[i][j]=1+dp[i-1][j-1];
                ans=max(ans,dp[i][j]);
            }
            else{
                dp[i][j]=0;
            }

        }
    }
    return ans;

}

int main(){
    string a="abcwetyuimnhg";
    string b="qwabciuimnhtw";
    cout<<lcs(a,b);
    return 0;
}