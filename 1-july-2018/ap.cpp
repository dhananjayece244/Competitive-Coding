//#https://www.hackerrank.com/contests/w38/challenges/minute-to-win-it

#include<bits/stdc++.h>
#define ll long long int
#define mod 1000000007
#define mll map<ll,ll>
#define sll set<ll>
#define fo(i,n) for(i=0;i<n;i++)
using namespace std;

ll n,k,cnt,x;

map<ll,ll>mp;

int main(){
	cin>>n>>k;
//	int a[n+1];
	cnt=0;
	for (ll i = 1; i <=n; ++i){
		cin>>x;
		mp[x-k*i]++;
		if(mp[x-k*i]>cnt){
			cnt=mp[x-k*i];
		}
	}
	cout<<n-cnt<<endl;
	return 0;
}