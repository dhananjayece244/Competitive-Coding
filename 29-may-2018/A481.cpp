#include <bits/stdc++.h>
using namespace std;
int j,n,a[50],b[50], h[1001];
int main()
{
	cin>>n;
	for (int i = 0; i <= 1000; ++i)
	{
		h[i]=0;
		/* code */
	}
	for (int i = 0; i <=50; ++i)
	{
		b[i]=0;
		/* code */
	}
	for (int i = 0; i < n; ++i)
	{
		cin>>a[i];
		h[a[i]]+=1;
		/* code */
	}
	j=50;
	for (int i = n-1; i >=0; --i)
	{
		if(h[a[i]]<=0)
			continue;
		else
			{
			j--;
			b[j]=a[i];
			h[a[i]]=-1;

		    }
		/* code */
	}
	cout<<50-j<<endl;
	for (int i = j; i < 50; ++i)
	{
		if(b[i]==0)
			break;
		cout<<b[i]<<" ";
		/* code */
	}
	return 0;
}