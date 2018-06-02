#include<bits/stdc++.h>
using namespace std;

int a[100005],dp[100005];
int n;

int main(){
	cin>>n;
	for (int i = 0; i < n; ++i)
		{
			cin>>a[i];
			dp[i]=1;
		}

	//memset(dp,1,100005);
	int res=1;
	for (int i =n-2; i >=0; --i)
	{
		//cout<<dp[i]<<endl;
		if(a[i]<=a[i+1])
		{
			dp[i] =1+ dp[i+1];
			res=max(dp[i],res);
			//cout<<res<<endl;
		}
	}
	cout<<res<<endl;
	return 0;
}