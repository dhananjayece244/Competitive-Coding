#include<bits/stdc++.h>
using namespace std;
long long int n,dp[20000][30];
long long solve(long long sum1,int last_coin){
	if(sum1 < 0 || last_coin <= 0) return 0;
	if(dp[sum1][last_coin] != -1) {
		return dp[sum1][last_coin];
	}

	long long int ans=0;
	
	for(int coin = last_coin;coin >= 1;coin-- ) {
		long long val = coin * coin * coin;
		if( val <= sum1) {			
			ans += solve(sum1 - val,coin);
		}
	}
	return dp[sum1][last_coin] = ans;
}
int main(){
	memset(dp,-1,sizeof dp);
	for(int i = 1;i<30;i++) {
		dp[0][i] = 1;
		dp[1][i] = 1;
		dp[2][i] = 1;
	}
	while(scanf("%lld",&n) > 0) {
		cout<<solve(n,21)<<endl;
	}
}