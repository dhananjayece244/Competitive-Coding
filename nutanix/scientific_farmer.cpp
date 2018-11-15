#include <bits/stdc++.h>
using namespace std;

#define ll long long
int n;
int a[10001];
int dp[10001];
int solve(int idx, int m){
	if(idx>=m)
		return 0;
	if(dp[idx]!=-1)
		return dp[idx];
	int res ;
	res = max(solve(idx+1, m), a[idx] + solve(idx+2, m));
	return dp[idx] = res;
}

int main(){
	
	cin>>n;
	memset(dp, -1, sizeof dp);
	for (int i = 0; i < n; ++i){
		cin>>a[i];
	}
	int ans1 = a[0] + solve(2, n-1);
	memset(dp, -1, sizeof dp);
	int ans2 = solve(1,n);
	// cout<<ans1<<" "<<ans2<<endl;
	cout<<max(ans1, ans2)<<endl;
	return 0;
}