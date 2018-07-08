#include<bits/stdc++.h>
#define ll long long int
#define mod 1000000007
#define mll map<ll,ll>
#define sll set<ll>
#define fo(i,n) for(i=0;i<n;i++)

using namespace std;

int i,j,n,k;
int divisor[2001];

int main()
{
	cin>>n>>k;
	for (i = 1; i <=n; ++i)
	{
		for (j = i; j <=n; j+=i)
		{
			divisor[j] +=1;
			/* code */
		}
		
		/* code */
	}
	dp[0][0]=0;
	
	total[0]=0;
	total[1]=n;

	for (i = 1; i <=n; ++i)
	{
		for (j = 1; j <=n; j+=i)
		{
			dp[i][j] = dp[i-1][j]*divisor[j];
			total[i]+=dp[i][j];
		}
	}

}