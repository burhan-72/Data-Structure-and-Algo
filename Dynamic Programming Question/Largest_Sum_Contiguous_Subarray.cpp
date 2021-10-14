#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int kadane(vector<int>arr,int n){
    int ans=0,maxNum=INT_MIN,sum=0;
    for(int i=0;i<n;i++){
        maxNum=max(maxNum,arr[i]);
        sum+=arr[i];
        if(sum<0)sum=0;
        ans=max(ans,sum);
    }
    if(maxNum<0)return maxNum;
    return ans;
}

int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<kadane(arr,n);
    return 0;
}