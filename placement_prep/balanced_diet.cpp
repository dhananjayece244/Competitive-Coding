#include <bits/stdc++.h>
using namespace std;

int n,k;
int dp[51][501][501], f[51],p[51];

int solve(int idx, int pr, int ft){
	if(idx==n){
		if(ft>0){
			if(pr>=ft*k)
				return 1;
			else
				return 0;
		}else
			return 0;
	}
	if(dp[idx][pr][tr]!=-1){
		return dp[idx][pr][tr];
	}
	int temp = (solve(idx+1, pr+p[idx], ft+f[idx]) ||
				 solve(idx+1, pr, ft));
	return dp[idx][pr][tr];
}

int main{
	cin>>n>>k;
	memset(dp, -1, sizeof dp);
	for (int i = 0; i < n; ++i)
	{
		cin>>p[i]>>f[i];
	}
	int ans = solve(0,0,0);
	if(ans)
		cout<<"YES\n";
	else
		cout<<"NO\n";

	return 0;

}