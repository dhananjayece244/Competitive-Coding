#include<bits/stdc++.h>
#define ll long long int
#define mod 1000000007
using namespace std;

int n,t;

int main()
{
	cin>>t;
	while(t--){
		cin>>n;

		char s[n+1];
		int cnt[n+2][2];
		int dp[n+2];

		cin>>s;

		memset(cnt, 0, sizeof cnt);
		memset(dp, 0, sizeof dp);

		for (int i = 0; i <n; ++i)
		{
			if(s[i]=='x'){
				cnt[i+1][0] = cnt[i][0] +1;
				cnt[i+1][1] = cnt[i][1];
			}
			else{
				cnt[i+1][0] = cnt[i][0];
				cnt[i+1][1] = cnt[i][1] + 1;
			}
		}
		
		for (int i = 1; i <=n; ++i)
		{
			for (int j = i-1; j >=0; --j)
			{
				int x = cnt[i][0] - cnt[j][0];
				int y = cnt[i][1] - cnt[j][1];	
				if(x>y){
					dp[i] = max(dp[i], dp[j] + i-j);
				}
				else{
					dp[i] = max(dp[i], dp[i-1]);
				}
				
			}
		
		}
		cout<<dp[n]<<endl;
}

	return 0;
}