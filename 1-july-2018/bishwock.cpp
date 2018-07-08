//http://codeforces.com/contest/991/problem/D

#include<bits/stdc++.h>
#define ll unsigned long long int
#define mod 1000000007
#define mll map<ll,ll>
#define sll set<ll>
#define fo(i,n) for(i=0;i<n;i++)
using namespace std;

char s1[105],s2[105];
int n;
int dp[105][4];

int solve(int idx, int state){
	//cout<<idx<<" "<<state<<endl;

	if(idx==n-2){
		if(state==3)
			return 0;
		if(state==0){
			if(s1[idx+1]=='0' || s2[idx+1]=='0')
				return 1;
			else
				return 0;
		}
		if(state==1){
			if(s1[idx]=='0' && s1[idx+1]=='0' && s2[idx+1]=='0')
				return 1;
			else
				return 0;
		}
		if(state==2){
			if(s2[idx]=='0' && s1[idx+1]=='0' && s2[idx+1]=='0')
				return 1;
			else
				return 0;
		}
	}

	if(dp[idx][state]!=-1)
		return dp[idx][state];

	int ans=0;

	if(state==0){
		int x=0,y=0,z=0,w=0,v=0;
		if(s1[idx+1]=='0'){
			if(s2[idx+1]=='0')
				x = 1 + solve(idx+1,2);
			else
				x = 1 + solve(idx+1,3);
			
		}
		if(s2[idx+1]=='0'){
			if(s1[idx+1]=='0')
				y = 1 + solve(idx+1,1);
			else
				y = 1 + solve(idx+1,3);
			
		}
		
		if(s1[idx+1]=='X' && s2[idx+1]=='X')
			v= solve(idx+1,3);

		ans = max(v, max(x, max(y, max(z, w))));

	}
	else if(state==1){
		int x=0, y=0, z=0, w=0,v=0;

		if(s2[idx+1]=='0' && s1[idx+1]=='0')
			x=1+ solve(idx+1,3);
		
		if(s1[idx+1]=='0')
			z=solve(idx+1,1);
		if(s2[idx+1]=='0')
			w=solve(idx+1,2);
		if(s1[idx+1]=='X' && s2[idx+1]=='X')
			v= solve(idx+1,3);

		ans = max(v, max(x, max(y, max(z, w))));
		
	}
	else if(state==2){
		int x=0,y=0,z=0,w=0,v=0;

		if(s2[idx+1]=='0' && s1[idx+1]=='0')
			x=1+ solve(idx+1,3);
		
		if(s1[idx+1]=='0')
			z=solve(idx+1,1);
		if(s2[idx+1]=='0')
			w=solve(idx+1,2);
		if(s1[idx+1]=='X' && s2[idx+1]=='X')
			v= solve(idx+1,3);

		ans = max(v, max(x, max(y, max(z, w))));
		

	}
	else if(state==3){
		int x=0,y=0,z=0,w=0,v;

		if(s1[idx+1]=='0' && s2[idx+1]=='0')
			y= solve(idx+1,0);
		if(s1[idx+1]=='0')
			z= solve(idx+1,1);
		if(s2[idx+1]=='0')
			w= solve(idx+1,2);
		if(s1[idx+1]=='X' && s2[idx+1]=='X')
			v= solve(idx+1,3);

		ans = max(v, max(x, max(y, max(z, w))));
	}
	//cout<<idx<<" "<<state<<" "<<ans<<endl;
	return dp[idx][state]=ans;
}

int main(){
	cin>>s1;
	cin>>s2;

	n=strlen(s1);
	if(n==1)
	{
		cout<<0<<endl;
		return 0;
	}
	memset(dp, -1, sizeof dp);
	int f;
	if(s1[0]=='0' && s2[0]=='0')
		f=0;
	else if(s1[0]=='0')
		f=2;
	else if(s2[0]=='0')
		f=1;
	else
		f=3;
	cout<<solve(0,f)<<endl;

	return 0;


}
/*
int dp[112][4];

int main(){
  ios_base::sync_with_stdio(false);
  cout<<fixed<<setprecision(0);
	string s,t;
	cin>>s>>t;
	int n=s.size();
	vector<int> a(n);
	rep(i,n) a[i]=(s[i]=='0')+(t[i]=='0');
	int re=0;
	rep(i,n-1){
		if(a[i]==1){
			if(a[i+1]==2){
				a[i+1]=a[i]=0;
				++re;
			}
		}else if(a[i]==2){
			if(a[i+1]){
				--a[i+1]; a[i]=0;
				++re;
			}
		}
	}
	cout<<re<<endl;
  return 0;
}
*/