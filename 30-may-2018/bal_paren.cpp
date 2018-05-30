#include <bits/stdc++.h>
using namespace std;
char s[1000001];
int n,i,dp[1000001],max1,count1,l;
int main()
{
	//cin>>n;
	cin>>s;
	max1=-1;
	if(s[0]=='(' && s[1]==')')
		dp[1]=2;
	if(s[1]=='(' && s[2]==')')
		dp[2]=2;
	if(dp[1]||dp[2])
		max1=2;
	l=strlen(s);
	for(i=3;i<l;i++)
	{
		if(s[i]=='(')
			dp[i]=0;
		else
		{
			if(s[i-dp[i-1]-1]=='(')
				dp[i]=dp[i-1]+dp[i-dp[i-1]-2]+2;
			else
				dp[i]=0;
		}
		if(dp[i] > max1)
			max1= dp[i];
	}
	count1=0;
	for (int i = 0; i < l; ++i)
	{
		if(dp[i] ==max1)
			count1++;
	}
	if(max1<=0)
		cout<<0<<" "<<1<<endl;
	else
		cout<<max1<<" "<<count1<<endl;
	return 0;
}