#include<bits/stdc++.h>
using namespace std;
int a[100005];
int dp[100005][10];
int n,k;


long long int solve(int idx, long long int sum1){
    
    sum1=sum1%k;
    if(idx>n)
      return 0;
    if(idx==n)
   {
       // cout<<sum1<<" "<<k<<" idx "<<idx<<endl;
        if(sum1%k==0)
            return 1;
        else 
            return 0;
    }          
    if(dp[idx][sum1]!=-1)
        return dp[idx][sum1];
 
    long long int res= solve(idx+1,sum1) + solve(idx+1, sum1+a[idx]) ;
    return dp[idx][sum1]=res%1000000007 ;
}
int main()
{
	
	cin>>n>>k;
    for (int i = 0; i < n; ++i)
    {
        cin>>a[i];
        /* code */
    }

    memset(dp,-1,sizeof dp);
	cout<<solve(0,0)<<endl;

	return 0;
}