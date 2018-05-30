#include <bits/stdc++.h>

using namespace std;
int main()
{
	int n;
	int a[101];
	cin>>n;
	for (int i = 0; i < n; ++i)
	{
		cin>>a[i];
		/* code */
	}
	for (int i = 0; i < n; ++i)
	{
		if(a[i]<37)
			cout<<a[i]<<endl;
		else
		{
			if((a[i]+1)%5==0)
				cout<<a[i]+1<<endl;
			else if((a[i]+2)%5==0)
				cout<<a[i]+2<<endl;
			else
				cout<<a[i]<<endl;
		}
		/* code */
	}
	return 0;
}