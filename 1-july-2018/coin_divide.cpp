#include<bits/stdc++.h>
using namespace std;
int diff=INT_MAX,t,n,sum1,s;
int a[101];

void solve(int idx, int s1){
	if(idx==n)
	{
		int s2= sum1-s1;
		
		diff=min(diff, abs(s2 - s1));
		
		return ;
	}
	solve(idx+1,s1);
	solve(idx+1,s1+a[idx]);
}

void solve_dp(int n, int s1){

	bool dp[n+1][s1+1];

	memset(dp,false,sizeof dp);

	for (int i = 0; i <=n ; ++i)
		dp[i][0]=true;

	for (int i = 1; i <= s1; ++i)
		dp[0][i]=false;
	
	for (int i = 1; i <=n; ++i)
	{
		for (int j = 1; j <= s1; ++j)
		{
			if(j < a[i-1]) {

				dp[i][j] = dp[i - 1][j];
			
			}else {
			//	cout <<"><><";
				dp[i][j] = dp[i-1][j] || dp[i - 1][j-a[i-1]];
			
			}

			cout <<"item "<<i<<" sum ="<<j<<" : "<<dp[i][j]<<endl;
		}
		
	}
	// for (int i = 1; i <=n; ++i)
	// {
	// 	for (int j = 1; j <= 60; ++j)
	// 	{
	// 		cout<<dp[i][j]<<" ";
	// 	}
	// 	cout<<endl;
		
	// }
/*	int diff_left = s1/2;
	int r = diff_left;
	if(s1%2)
		r++;

	while(!dp[n][diff_left] && diff_left>=0)
		diff_left--;
	cout<<(r-diff_left)*2<<endl;*/
	int k = 0;
	for(int s = s1 / 2;s>= 0;s--) {
		if(dp[n][s]) {
			k = s;
			break;
		}
	}
	cout << sum1 - 2*k <<endl;

}

int main(){

	cin>>t;
	while(t--){
		cin>>n;
		sum1=0;
		for (int i = 0; i < n; ++i)
		{
			cin>>a[i];
			sum1+=a[i];
		}
		// diff=INT_MAX;
		// solve(0,0);
		// cout<<diff<<endl;
		solve_dp(n,sum1);


	}

}