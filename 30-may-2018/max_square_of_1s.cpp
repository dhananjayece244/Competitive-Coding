#include <bits/stdc++.h>
using namespace std;

int n,m,a[1000][1000],dp[1000][1000], max1;

int main()
{
	cin>>n>>m;
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			cin>>a[i][j];
			/* code */
		}
		/* code */
	}
	for (int j = 0; j < n; ++j)
		dp[j][0]=a[j][0];

	for (int j = 0; j < m; ++j)
		dp[0][j]=a[0][j];

	for (int i = 1; i < n; ++i)
	{
		for (int j = 1; j < m; ++j)
		{
		  if(a[i][j])
		  	dp[i][j]=min(dp[i-1][j-1], min(dp[i-1][j] , dp[i][j-1])) + 1;
		  else
		  	dp[i][j]=0;
	     	/* code */
		}
	}

	max1=0;
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			if(max1<dp[i][j])
				max1 = dp[i][j];

			/* code */
		}
		/* code */
	}
	cout<<max1<<endl;

	return 0;

}