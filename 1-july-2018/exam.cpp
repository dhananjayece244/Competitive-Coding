//http://codeforces.com/contest/991/problem/A
#include<bits/stdc++.h>
#define ll unsigned long long int
#define mod 1000000007
#define mll map<ll,ll>
#define sll set<ll>
#define fo(i,n) for(i=0;i<n;i++)
using namespace std;

int a,b,c,n;
int main(){
	cin>>a>>b>>c>>n;

	if(c>a || c>b || a+b<c)
		cout<<-1<<endl;
	else if(a+b-c>=n)
		cout<<-1<<endl;
	else
		cout<<n-(a+b-c)<<endl;
	return 0;
}