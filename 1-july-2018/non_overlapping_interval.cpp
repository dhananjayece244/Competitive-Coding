#include<bits/stdc++.h>
#define ll long long int
#define mod 1000000007
#define mll map<ll,ll>
#define sll set<ll>
#define fo(i,n) for(i=0;i<n;i++)
using namespace std;

vector<pair<int,int>>points;
int dp[400005];

ll n,x,y,k,t,sum1;

int solve(int idx, int cnt){

	if(idx>=n)
		return 0;
	if(cnt==k)
		return 1;

	// if(dp[idx]!=-1)
	// 	return dp[idx];

	int next= lower_bound(points.begin(), points.end(),make_pair(points[idx].second,-1))- points.begin();
	//int next;
	ll res;
	if(next>=n)
		return 0;
	cout<<next<<endl;
	for (int i = next; i < n; ++i)
	{
		res+= solve(i, cnt+1) + solve(idx+1,cnt);
	}

	return res;
	//return dp[idx]=res%mod;
}

bool cmp(const pair<int, int> &a, const pair<int, int> &b){
	return a.first < b.first;
	
}

int main(){
	cin>>t;
	while(t--){
		cin>>n>>k;
		memset(dp, -1, sizeof dp);
		for (int i = 0; i <n; ++i)
		{
			cin>>x>>y;
			points.push_back(make_pair(x,y));
			
		}
	    sort(points.begin(),points.end(),cmp);

	    cout<<solve(0,0)<<endl;


	}

	
	
	


	return 0;
}