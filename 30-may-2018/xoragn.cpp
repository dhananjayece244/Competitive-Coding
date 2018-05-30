#include <bits/stdc++.h>
using namespace std;

long long int x,t,n,sum1;
int main()
{
	cin>>t;
	while(t--)
	{
		sum1=0;
		cin>>n;
		for (int i = 0; i < n; ++i)
		{
			cin>>x;
			sum1 ^=(x+x) ;
			/* code */
		}
		cout<<sum1<<endl;;
	}

	return 0;
}