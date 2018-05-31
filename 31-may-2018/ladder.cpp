#include<bits/stdc++.h>
using namespace std;

int decr[100005],inc[100005],a[100005];
int n,m,ll,rr;

int main()
{
	cin>>n>>m;
	for (int i = 0; i < n; ++i)
		cin>>a[i];

	decr[n-1]=n-1;
	inc[n-1]=n-1;
	
	for (int i = n-2; i >=0; --i)
	{
		if(a[i]>=a[i+1])
			decr[i]=decr[i+1];
		else 
			decr[i]=i;

		if(a[i]<=a[i+1])
			inc[i]=inc[i+1];
		else
			inc[i]=i;

		//cout<<inc[i]<<" "<<decr[i]<<endl;

	}
	while(m--)
	{
		cin>>ll>>rr;
		ll--;
		rr--;
		if(decr[inc[ll]]>=rr)
			cout<<"Yes\n";
		else
			cout<<"No\n";
	}
	return 0;
}