#include <bits/stdc++.h>

using namespace std;
int main()
{
	int n,flag,count1;
	char a[10001];
	cin>>n;
	cin>>a;
	flag=1;
	count1=0;
	if(n%2)
	{
		if(a[0]!='1')
			flag=0;
		if(flag)
		{
			for (int i = 1; i < n; ++i)
				{
					if(i%2 && a[i]!='0')
					{
						flag=0;
						break;
					}
					if(i%2==0 && a[i]!='1')
					{
						flag=0;
						break;
					}
					/* code */
				}
		}
		if(flag)
			cout<<"Yes\n";
		else
			cout<<"No\n";

	}
	else
		{
		if(a[0]=='1' && a[1]=='0')
			count1++;
		for(int i = 1; i < n-1; ++i)
			{
				if(a[i]=='1')
				{
					if(a[i-1]=='1' || a[i+1]=='1')
					{
						flag=0;
						break;
					}

					count1++;
				}
			}
			if(n>3)
			{
				if(a[n-2]=='0' && a[n-1]=='1');
				count1++;
			}
			if(flag && count1*2==n)
				cout<<"Yes\n";
			else
				cout<<"No\n";
			//cout<<count1;

		}		
	return 0;
}