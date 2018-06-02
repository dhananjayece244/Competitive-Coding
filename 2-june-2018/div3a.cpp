#include <bits/stdc++.h>
using namespace std;

int h[101],b[101];
int k1,k,n,x;
int main()
{
	cin>>n>>k;
	for (int i = 0; i < n; ++i)
	{
		cin>>x;
		if(!h[x])
		{
			h[x]=1;
			b[k1]=i+1;
			k1++;
		}
	}
	if(k1>=k)
		{
			cout<<"YES\n";
			for (int i = 0; i < k; ++i)
			{
				cout<<b[i]<<" ";
			}
		}
	else
		cout<<"NO\n";

	return 0;

}
