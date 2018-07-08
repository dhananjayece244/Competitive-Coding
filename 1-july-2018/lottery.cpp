//http://codeforces.com/contest/996/problem/A

#include<bits/stdc++.h>
#define ll unsigned long long int
#define mod 1000000007
#define mll map<ll,ll>
#define sll set<ll>
#define fo(i,n) for(i=0;i<n;i++)
using namespace std;

int n,a,b,c,d,e;
int main(){
	cin>>n;
	
	a=n/100;
	n = n-a*100;
	b=n/20;
	n=n-b*20;
	c=n/10;
	n=n-c*10;
	d=n/5;
	n=n-d*5;
	e=n/1;
	cout<<a+b+c+d+e<<endl;

	return 0;
	
}
