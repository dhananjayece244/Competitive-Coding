#include<bits/stdc++.h>
using namespace std;
int dp[22];

int solve(int idx, int n, int s, int a[], int ans){

    if(s==0)
        return ans ;
    
    if(dp[idx]!=-1)
        return dp[idx];
    
    int res;
    int temp = a[idx] + a[idx+1] + a[idx+2];

    res = min(res, solve(idx+1, n, s, a, ans));

    a[idx] = a[idx+1] =a[idx+2]=0;
    res = min(res, solve(idx+3, n, s-temp, a, ans + s-temp));

    return dp[idx] = res;

}

int main(){
    int n,s=0;
    cin>>n;
    int a[n+3];
    for(int i = 0; i<n; i++){
        cin>>a[i];
        s +=a[i];
    }
    a[n] = a[0];
    a[n+1]=a[1];

    cout<<solve(0, n, s , a, 0)<<endl;
    return 0;

}