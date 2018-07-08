#include<bits/stdc++.h>
using namespace std;
long long int a[100005];
long long int dp[100005][2];
int n;
bool arr[100005][2];

long long int solve(int idx,int flag){
    if(idx>=n)
        return -1e16;
    if(idx==n-1)
        return a[idx];

    if(arr[idx][flag]!=0){

        return dp[idx][flag];

    }
    arr[idx][flag]=1;

    long long int res=-1e16;
    if(!flag){
        
        res = a[idx]+solve(idx+1,1);
    } 
   res = max(res, a[idx]+ max(solve(idx+2, flag),solve(idx+3,flag)));  

   return dp[idx][flag]=res;
}
int main()
{
	
	cin>>n;
    for (int i = 0; i < n; ++i)
        cin>>a[i];

   // memset(dp,-10000007,sizeof dp);
	cout<<solve(0,0)<<endl;

	return 0;
}