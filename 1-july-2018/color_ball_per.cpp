#include<bits/stdc++.h>
#define ll long long int
#define mod 1000000007
#define mll map<ll,ll>
#define sll set<ll>
#define fo(i,n) for(i=0;i<n;i++)

using namespace std;

ll i,j,n,k,total,res;
ll color[1005];
ll c[1005][1005];
int main()
{
	cin>>n;
	for (i = 1; i <=n; ++i)
	{
		cin>>color[i];
	}
	
	c[0][0]=1;
	for (i = 1; i <1005; ++i)
	{
		c[i][0]=1;
		for (j = 1; j <=i; j++)
			c[i][j]=(c[i-1][j] + c[i-1][j-1])%mod;
	}

	res =1;
	total = 0;
	for (int i = 1; i <=n; ++i)
	{
		res = res*(c[total+color[i]-1][color[i]-1])%mod;
		total +=color[i];
	}
	cout<<res<<endl;

	return 0;

}