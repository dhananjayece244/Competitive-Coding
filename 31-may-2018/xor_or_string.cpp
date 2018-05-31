#include<bits/stdc++.h>
using namespace std;

char s1[1000001],s2[1000001];
int flag1,flag2,l1,l2;

int main()
{
	cin>>s1;
	cin>>s2;

	l1= strlen(s1);
	l2= strlen(s2);

	if(l1!=l2)
		cout<<"NO\n";
	else
	{
		for (int i = 0; i < l1; ++i)
		{
			if(s1[i]=='1')
				flag1=1;
			if(s2[i]=='1')
				flag2=1;
		}
		if(!(flag1 xor flag2) )
			cout<<"YES\n";
		else
			cout<<"NO\n";
	}
	return 0;
}