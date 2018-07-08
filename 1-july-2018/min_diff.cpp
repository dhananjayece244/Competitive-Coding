#include <bits/stdc++.h>
using namespace std;

int s;
int a[52];
int dp[52][2500];
bool temp[52][2505];

int n,t;

int solve(int idx, int sm){

	if(idx==n){
		return abs(s-2*sm);
	}
	if(temp[idx][sm]!=0)
		return dp[idx][sm];

	temp[idx][sm]=1; 

	return dp[idx][sm]= min(solve(idx+1, sm),solve(idx+1, a[idx]+sm));

}

int main()
{
	cin>>t;
	while(t--){
		memset(temp,0,sizeof temp);
		cin>>n;
		s=0;
		for (int i = 0; i < n; ++i){
			cin>>a[i];
			s+=a[i];
		}

		cout<<solve(0,0)<<endl;
	}

	//cout<<ans<<endl;

	return 0;

}