//https://www.hackerrank.com/contests/w38/challenges/which-section

#include<bits/stdc++.h>
#define ll long long int
#define mod 1000000007
#define mll map<ll,ll>
#define sll set<ll>
#define fo(i,n) for(i=0;i<n;i++)

using namespace std;

vector< pair <int,int> > vect;

int solve(int idx){
	if(idx>last)
		return 1;

	if(dp[idx])
		return dp[idx];


    next = upper_bound(vect.begin(), vect.end(), v[idx].second)-vect.begin();

    ll res = solve(next, cnt + 1) + solve(idx+1, cnt);
    return dp[idx] = res % mod;

}

int main()
{

	cin>>t;
	while(t--){
		cin>>n>>k;
		for (int i = 0; i < n; ++i)
		{
			cin>>x>>y;
			vect.push_back(make_pair(x,y));
		}
		sort(vect.begin(),vect.end());
	}

	cout<<solve(0)<<endl;

	return 0;
}
