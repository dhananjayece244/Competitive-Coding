#include <bits/stdc++.h>
using namespace std;
int n,j,count1;
char s[100];

int main()
{
	cin>>n;
	cin>>s;
	count1=0;
	for (int i = 0; i < strlen(s); ++i)
	{
		if(s[i]!='x')
			j=0;
		else
		{
			j++;
			if(j>2)
				count1++;
		}
		/* code */
	}
	cout<<count1<<endl;

	return 0;
}