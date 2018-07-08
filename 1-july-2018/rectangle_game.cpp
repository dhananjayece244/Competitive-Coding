#include<bits/stdc++.h>
#define ll long long int
#define mod 1000000007
#define mll map<ll,ll>
#define sll set<ll>
#define fo(i,n) for(i=0;i<n;i++)

using namespace std;
int n;
ll dp[1000001];
ll dpl[1000001];
ll solve(int);

ll solve_L(int idx){
	if(idx>=n)
		return 0;

	// if(idx==n)
	// 	return 1;

	if(dpl[idx])
		return dpl[idx];
	ll res2 = solve(idx+1) + solve_L(idx+1);
	return dpl[idx] = res2%mod;
}

ll solve(int idx){
	if(idx>n){
		return 0;
	}
	if(idx==n)
		return 1;

	if(dp[idx])
		return dp[idx];

	ll res = solve(idx+1) + solve(idx+2) + 2*solve_L(idx+2);

	return dp[idx] = res%mod;
}

int main(){

	cin>>n;
	cout<<solve(0)<<endl;

	return 0;

}