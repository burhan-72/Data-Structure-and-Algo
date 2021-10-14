#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int lps(string s){
    int n=s.length();
    int dp[n][n];
    memset(dp,0,sizeof(dp));
    for(int g=0;g<n;g++){
        for(int i=0,j=g;j<n;i++,j++){
            if(g==0){
                dp[i][j]=1;
            }
            else if(g==1){
                if(s[i]==s[j]){
                    dp[i][j]=2;
                }
                else{
                    dp[i][j]=1;
                }
            }
            else{
                if(s[i]==s[j]){
                    dp[i][j]=2+dp[i+1][j-1];
                }
                else{
                    dp[i][j]=max(dp[i+1][j],dp[i][j-1]);
                }
            }

        }
    }
    return dp[0][n-1];
}

int main(){
    
    string s="abcrwghjujra";
    cout<<lps(s);
    return 0;
}
 