#include <bits/stdc++.h>
using namespace std;

int dp[500][500];
int solve(int rem_sum, int last ){
	if(rem_sum<0 || (last==1 && rem_sum))
		return 0;

	if(rem_sum == 0)
		return 1;
	
	if(dp[rem_sum][last]!=-1)
		return dp[rem_sum][last];

	int res=0;

	for (int i = last-1; i >0; --i)
		res +=solve(rem_sum-i,i);
	return dp[rem_sum][last]=res;
}

int main(){
	int n;
	cin>>n;
	memset(dp,-1,sizeof dp);
	cout<<solve(n,n)<<endl;
}