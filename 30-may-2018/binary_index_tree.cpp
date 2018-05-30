#include <bits/stdc++.h>
using namespace std;

#include <bits/stdc++.h>
using namespace std;

#define rep(i,a,b)                for(ll i=a;i<b;i++)
#define re(i,b)                for(ll i=0;i<b;i++)
#define repr(i,n)                for(ll i=n-1;i>=0;i--)
#define ll long long
#define ld long double
#define llu long long unsigned
#define pll std::pair<ll, ll> 
#define ppll std::pair<ll, pll>
#define vll std::vector<ll> 
#define vpll std::vector<pll> 
#define vppll std::vector<ppll> 
#define mll std::map<ll, ll> 
#define mpll std::map<pll, ll>
#define mppll std::map<ppll, ll>
#define sll std::set<ll>
#define ff first
#define ss second
#define msll std::multiset<ll>
#define all(c) c.begin(), c.end()
#define allr(c) c.rbegin(), c.rend()
#define srt(x) sort(all(x))
#define rsrt(x) sort(allr(x))
#define mp make_pair
#define mt make_tuple
#define eb emplace_back
#define pb push_back
#define s(yy) ll yy;cin>>yy
#define mod 1e9+7
#define maxlong 1e18+5

/*
###################################################### 
#                                                    #
#                     @author                        #
#                    Dhananjay                       #
#                                                    #
#                                                    #
###################################################### 
*/




vector<int> has(100000);

void binary_index_tree(std::vector<int> v)
{
	int j;
	for (int i = 0; i < v.size(); ++i)
		has[i+1]=v[i];
	for (int i = 1; i < v.size(); ++i)
	{
		j = i +(i & -i);
		if(j<v.size())
		{
			has[j] +=has[i];
			cout<<has[j]<<" "<<i<<" "<<j<<endl;;
		}
	}
	for (int i = 0; i < v.size(); ++i)
	{
		cout<<has[i]<<" ";
		/* code */
	}
	cout<<endl;

}

int prefix_query(int idx)
{
	int result =0;
	for (++idx; idx> 0; idx -=idx & -idx)
	{
		result +=has[idx];
		/* code */
	}
	return result;
}

int range_query(int from_idx, int to_idx)
{
	return prefix_query(to_idx)-prefix_query(from_idx-1);
}

void update(int idx, int add)
{
	for(++idx;idx<has.size();idx +=idx &-idx)
	{
		has[idx] +=add;
	}
}

int main()
{
	vector<int> arr{1,7,3,0,5,8,3,2,6,2,1,1,4,5};

	binary_index_tree(arr);
	return 0;
}