#include <bits/stdc++.h>
using namespace std;
int n,m,r;
unsigned long long int a[200005],b[200005],c[200005];


int main()
{
	cin>>n>>m;
	cin>>a[0];
	c[0]=a[0];
	for (int i = 1; i < n; ++i)
	{
		cin>>a[i];
		c[i]=c[i-1]+a[i];
		/* code */
	}
	for (int i = 0; i < m; ++i)
	{
		cin>>b[i];
		/* code */
	}
	
	for (int i = 0; i < m; ++i)
	{
		r =  upper_bound(c, c+n, b[i]) -c;
		if(b[i]-c[r-1]==0)
			cout<<r<<" "<<a[r-1]<<endl;
		else
			cout<<r+1<<" "<<b[i]-c[r-1]<<endl;

		/* code */
	}

	

	return 0;
}