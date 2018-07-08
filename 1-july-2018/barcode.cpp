//http://codeforces.com/problemset/problem/225/C


#include<bits/stdc++.h>
#define ll long long int
#define mod 1000000007
#define mll map<ll,ll>
#define sll set<ll>
#define fo(i,n) for(i=0;i<n;i++)
using namespace std;
string s[1001];
int cnt[1001];
int dp[1001][2][1001];
int n,m,x,y;
int solve(int idx, int type, int count){
	if(idx==m){
		if(count<x || count>y)
			return 10000000;
		else
			return 0;
	}
	

	if(dp[idx][type][count]!=-1){
		//cout<<dp[idx][type][count]<<endl;
		return dp[idx][type][count];
	}

	int res;
	if(type==0){
		if(count==y){
			res = cnt[idx] + solve(idx+1, 1, 1);
		}
		else{
			res = min(n-cnt[idx]+solve(idx+1,0, count+1),count<x?10000000:cnt[idx]+solve(idx+1, 1,1));
		}
	}
	else{
		if(count==y){
			res = n-cnt[idx] + solve(idx+1, 0, 1);
		}
		else{
			res = min(cnt[idx] + solve(idx+1, 1, count+1),count<x?10000000:n-cnt[idx] + solve(idx+1, 0,1));
		}

	}
	//cout<<"id "<<idx<<" type "<<type<<" cout "<< count<<" res "<<res<<endl;
	
	return dp[idx][type][count]=res;

}
int main(){
	cin>>n>>m>>x>>y;
	memset(cnt, 0, sizeof cnt);
	memset(dp, -1, sizeof dp);
	for (int i = 0; i < n; ++i)
	{
		cin>>s[i];
		for (int j = 0; j < m; ++j)
		{
			if(s[i][j]=='#')
				cnt[j]++;
		}

	}	
	cout<<min(n-cnt[0] + solve(1,0,1), cnt[0] + solve(1,1,1))<<endl;
	return 0;
}