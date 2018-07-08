#include<bits/stdc++.h>
#define ll long long int
#define mod 1000000007
#define mll map<ll,ll>
#define sll set<ll>
#define fo(i,n) for(i=0;i<n;i++)

using namespace std;

// int n,j,x;
// //map<ll,ll>mp;

// ll mp[100005];
// ll a[100005];
// ll dp[100005];

// ll solve(int idx, long long int s){
	
// 	if(idx>=100001){
// 		return s;
// 	}

// 	if(dp[idx]){
// 		return dp[idx];
// 	}

// 	return dp[idx] = max(solve(idx+1, s), solve(idx+2, s+(a[idx]*mp[a[idx]])));
// }


int main()
{
	ios::sync_with_stdio(false);

	ll n,i,j,k,t,a[100001];
	cin>>n;
	mll m;
	for (int i = 0; i < n; ++i)
	{
		cin>>a[i];
		m[a[i]]++;

	}
	sort(a,a+n);
	ll dp[100001]={0};
	j=1;
	dp[0]=0;
	dp[1]=m[1];

	for(i=2; i<100001; i++)
		dp[i]= max(dp[i-1], dp[i-2] + m[i]*i);

	cout<<dp[100000]<<endl;
	return 0;
}