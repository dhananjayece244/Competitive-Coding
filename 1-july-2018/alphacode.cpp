#include<bits/stdc++.h>
using namespace std;

string s;
int len;
int dp[1001];

int solve(int idx){

	if(idx>len-1)
		return 0;
	if(dp[idx]!=-1)
		return dp[idx];
	int a = s[idx]-'0';
	int b = s[idx+1]-'0';
	int res;
	if(s[idx]=='0')
		res = solve(idx+1);
	else{
		if(idx<len-1 && (a*10+b<27))
			res = solve(idx+1) + solve(idx+2);
		else
			res = solve(idx+1);
	}
	//cout<<"idx "<<idx<<" res "<<res<<endl;
	
	return dp[idx]= res;
}


int main()
{
	int t;
	cin>>t;
	while(t--){
		cin>>len;
		cin>>s;
		//len=s.size();
		memset(dp, -1, sizeof dp);
		dp[len-1]=1;
		int a = s[len-2]-'0';
		int b = s[len-1]-'0';
		if(a*10+b<26)
			dp[len-2]=2;
		else
			dp[len-2]=1;
		if(s[len-1]=='0'){
			dp[len-1]=0;
			if(s[len-2]=='0')
				dp[len-2]=0;
			else
				dp[len-2]=1;
		}
		if(s[len-2]=='0' && s[len-1]!='0')
			dp[len-2]=1;

		cout<<solve(0)<<endl;

		// cin>>s;
		// len=s.size();
	}
	return 0;

}