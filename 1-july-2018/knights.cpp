#include<bits/stdc++.h>
#define ll long long int
#define mod 1000000007
#define mll map<ll,ll>
#define sll set<ll>
#define fo(i,n) for(i=0;i<n;i++)

using namespace std;

map<ll,ll>mp;
map<ll,ll>mp1;

multiset<ll> s;

ll n,k,sum1;

int main()
{
	cin>>n>>k;
	
	ll a[n+1];
	ll b[n+1];

	for (int i = 0; i < n; ++i)
		cin>>a[i];

	for (int i = 0; i < n; ++i)
		cin>>b[i];

	for (int i = 0; i < n; ++i)
		mp[a[i]] = b[i];
	

	map <ll, ll> :: iterator itr;
	
   
	for (itr = mp.begin(); itr != mp.end(); ++itr)
		{
			ll key = itr->first;
			ll val = itr->second;
	
			if(s.size()>k){
				sum1 -=*s.begin();
				s.erase(s.begin());
			}
			s.insert(val);
			sum1 +=(val);
			//cout<<s.size()<<endl;
			mp1[key]= sum1;  		
		}

	for (int i = 0; i < n; ++i)
	{
		cout<<mp1[a[i]]<<" ";
			
	}
	cout<<endl;

    return 0;


}