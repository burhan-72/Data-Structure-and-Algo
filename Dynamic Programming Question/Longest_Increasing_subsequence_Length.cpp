#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


// O(n^2) Solution
int longestIncSS(vector<int>arr){
    int n=arr.size();
    vector<int>sum(n,1);
    int ans=1;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]<arr[j]&&sum[i]+1>=sum[j]){
                sum[j]=1+sum[i];
                ans=max(ans,sum[j]);
            }
        }
    }
    return ans;
}

// O(log(n)) Solution
int longestIncSS(vector<int>arr){
    vector<int>maxSixe(n+1);
    for(int i=0;i<=n;i++){
        if(i==0)maxSixe[i]=INT_MIN;
        else maxSixe[i]=INT_MAX;
    }
    for(int i=0;i<n;i++){
        int idx=upper_bound(maxSixe.begin(),maxSixe.end(),arr[i])-maxSixe.begin();
        if(maxSixe[idx])
    }
}

int main(){
    vector<int>arr{1,4,13,5,7,15};
    cout<<longestIncSS(arr);
    return 0;
}