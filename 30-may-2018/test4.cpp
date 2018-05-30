#include <bits/stdc++.h>
using namespace std;

int a[100005],b[10005];
int i,j,k,l,sum1=0,ii,jj,count1,n,m;

int main()
{
	cin>>n>>m;
	for (i = 0; i < n; ++i)
	{
		cin>>a[i];
	}
	for (i = 0; i < m; ++i)
	{
		cin>>a[i];
	}
	cin>>k;
	sort(a,a+n);
	sort(b,b+m);
	i=0;
	j=0;
	ii=0
	jj=0
	k--;
	while(k--)
	{
		if(a[i]+b[jj+1] < b[j] + b[ii+1])
		{
			if(jj+1<m)
				j++;
			else
				i++;
		}
		else
		{
			if(a[i]<b[j+1] && j+1<m)
				j++;
			else
				i++;
		}

	}
	//cout << count1 <<endl;

	return 0;
}