#include <bits/stdc++.h>
using namespace std;


int main()
{
	string s;
	cin>>s;

	int l=s.length(),flag=0,count1=0;
	for (int i = 0; i < l; ++i)
	{
		if(s[i]!='a')
			{
				flag=1;
				s[i] -=1;
				count1++; 
		    }
		else if(flag && s[i]=='a')
			break;
	}
	if(!count1)
	{
		s[l-1] ='z';
	}
	cout<<s<<endl;
	return 0;

}