//http://codeforces.com/contest/991/problem/B

#include<bits/stdc++.h>
#define ll unsigned long long int
#define mod 1000000007
#define mll map<ll,ll>
#define sll set<ll>
#define fo(i,n) for(i=0;i<n;i++)
using namespace std;

int i,n;

int main(){
	cin>>n;
	int a[n+1];
	int s=0;
	for (i = 0; i < n; ++i)
	{
		cin>>a[i];
		s+=a[i];
	}
	double need = double(n)*4.5;
	double temp = (s*1.0)/(n*1.0);

	if(temp>=4.5)
		cout<<0<<endl;
	else
	{
		temp = double(s);
		sort(a,a+n);
		for (i = 0; i < n; ++i)
		{
			temp +=double(5-a[i]);
			if(temp>=need)
				break;
		}
		cout<<i+1<<endl;

	}
	return 0;
}