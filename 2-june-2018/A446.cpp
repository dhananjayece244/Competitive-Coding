#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ULL;
typedef long long LL;

vector<pair<int, int>> interval;
LL dp[100009],n,ans;
const int md = 1e8;

bool cmp(pair<int,int> a, pair<int,int> b){
	return a.first < b.first;
}

LL solve(int indx)
{
	if(dp[indx]!=-1)
		return dp[indx];

	LL res = 1;
	int end_time = interval[indx].second;
	int next_indx= lower_bound(interval.begin(),interval.end(), pair<int,int>(end_time,numeric_limits<int>::min()),cmp)-interval.begin();

	if(next_indx<n)
		res = (res+ solve(next_indx))%md;

	res = (res+solve(indx+1))%md;

	return dp[indx]=res;
}

int main()
{
	cin>>n;
	while(1){
		if(n==-1)break;
		for (int x,y,i = 0; i < n; ++i)
		{
			cin>>x>>y;
			interval.push_back(make_pair(x,y));
		}
		sort(interval.begin() , interval.end());
		int idx=0;
		memset(dp,-1,sizeof dp);
		dp[n-1]=1;
		dp[n]=0;

		ans = solve(0);
		cout<<ans<<endl;
		cin>>n;
	}

	return 0;
}