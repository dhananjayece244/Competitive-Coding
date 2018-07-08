#include<bits/stdc++.h>
#define ll long long int
#define mod 1000000007
#define mll map<ll,ll>
#define sll set<ll>
#define fo(i,n) for(i=0;i<n;i++)

using namespace std;

int x[4];
int y[4];
int x1[4]
int y1[4];

int main()
{
	for (int i = 0; i < 4; ++i)
	{
		cin>>x[i]>>y[i];
	}
	for (int i = 0; i < 4; ++i)
	{
		cin>>x1[i]>>y1[i];
	}
	// cin>>x[0]>>y[0]>>x[1]>>y[1]>>x[2]>>y[2]>>x[3]>>y[3];
	// cin>>x1[0]>>y1[0]>>x1[1]>>y1[1]>>x1[2]>>y1[2]>>x1[3]>>y1[3];

	if((x1[0] > x[1]) || (y1[1] > y[2]) || (x1[2] < x[0]) || (y1[3] < y[0]))
		cout<<"NO\n";
	// else if(x1[0]>x[2] || y1[3]>y[2] || x1[2]<x[0] || y[1]<y[0])
	// 	cout<<"NO\n";
	else
		cout<<"YES\n";

	return 0;
}
