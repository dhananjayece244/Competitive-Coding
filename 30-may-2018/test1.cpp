#include <bits/stdc++.h>

long long int n,e,o,sum=0,x,t;


using namespace std;
int main()
{
	cin>>t;
	while(t--)
	{
		cin>>n;
		sum=0;
		e=0;
		o=0;
		for (int i = 0; i < n; ++i)
		{
			cin>>x;
			sum +=x;
			if(x%2)
				o++;
			else
				e++;
			/* code */
		}
		if(sum%2)
			cout<<o<<endl;
		else
			cout<<e<<endl;
	}

	return 0;
}