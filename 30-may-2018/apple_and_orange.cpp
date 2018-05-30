#include <bits/stdc++.h>

using namespace std;
int main()
{
	long int s,t,m,n,d,a,b,count1;
	cin>>s>>t;
	cin>>a>>b;
	cin>>m>>n;
	count1=0;
	for (int i = 0; i < m; ++i)
	{
		cin>>d;
		if(a+d>=s && a+d<=t)
			count1++;
		/* code */
	}
	cout<<count1<<endl;

	count1=0;
	for (int i = 0; i < n; ++i)
	{
		cin>>d;
		if(b-d>=s && b-d<=t)
			count1++;
		/* code */
	}
	cout<<count1<<endl;
	
	return 0;
}