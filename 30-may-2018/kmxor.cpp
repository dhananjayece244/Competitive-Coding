#include <bits/stdc++.h>
using namespace std;

long long int t,n,k,m,l;
int main()
{
	cin>>t;
	while(t--)
	{
		cin>>n>>k;
		m = log2 (k);
		l = pow(2,m)-1;
		if(n==1)
			cout<<k<<endl;
		else if(k==1)
			{
				for (int i = 0; i < n; ++i)
				{
					cout<<1<<" ";
					/* code */
				}
				cout<<endl;
			}
		else if(k==3 && n%2)
		{
			cout<<3<<" ";
			for (int i = 1; i < n; ++i)
			{
				cout<<1<<" ";
				/* code */
			}
			cout<<endl;
		}
		else
		{
			if(n%2)
			{
				if(l-1==0)
					cout<<pow(2,m)<<" "<<1<<" ";
				else
					cout<<pow(2,m)<<" "<<l-1<<" ";

			}
			else
				cout<<pow(2,m)<<" "<<l<<" ";

			for (int i = 2; i < n; ++i)
				cout<<1<<" ";

			cout<<"\n";

		}
	}
	return 0;
}