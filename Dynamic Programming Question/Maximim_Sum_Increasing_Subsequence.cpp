#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int msis(vector<int>arr){
    int n=arr.size();
    vector<int>sum(n);
    for(int i=0;i<n;i++){
        sum[i]=arr[i];
    }
    int maxSum=arr[0];
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[j]>arr[i]&&sum[j]<arr[j]+sum[i]){
                sum[j]=arr[j]+sum[i];
                maxSum=max(maxSum,sum[j]);
            }
        }
    }
    return maxSum;
}

int main(){
    vector<int>arr{1,4,13,5,7,15};
    cout<<msis(arr);
    return 0;
}