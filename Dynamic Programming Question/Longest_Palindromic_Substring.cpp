#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int lps(string s){
    int n=s.length();
    bool dp[n][n];
    int ans=0;
    memset(dp,false,sizeof(false));
    for(int g=0;g<n;g++){
        for(int i=0,j=g;j<n;i++,j++){
            if(g==0){
                dp[i][j]=true;
                
            }
            else if(g==1){
                if(s[i]==s[j]){
                    dp[i][j]=true;
                }
                else{
                    dp[i][j]=false;
                }
            }
            else{
                if(s[i]==s[j]&&dp[i+1][j-1]){
                    dp[i][j]=true;
                }
                else{
                    dp[i][j]=false;
                }
            }

            if(dp[i][j]&&ans<g+1){
                    ans=g+1;
            }
        }
    }
    return ans;
}

int main(){
    string s="abcacuswacbpqrqp";
    cout<<lps(s);
    return 0;
}

