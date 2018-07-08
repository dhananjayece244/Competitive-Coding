#include<bits/stdc++.h>
#define ll long long int
#define mod 1000000007
#define mll map<ll,ll>
#define sll set<ll>
#define fo(i,n) for(i=0;i<n;i++)

using namespace std;

int a[10];
int b[10];
int n,m,x;

int main()
{

	cin>>n>>m;
	


	for (int i = 0; i < n; ++i)
	{
		cin>>x;
		a[i]=x;
	}
	for (int i = 0; i < m; ++i)
	{
		cin>>x;
		b[x]=1;
		
	}
	for (int i = 0; i < n; ++i)
	{
		//cout<<a[i]<<endl;
		if(b[a[i]])
			cout<<a[i]<<" ";
	}
	cout<<endl;
	return 0;


}