//http://codeforces.com/contest/991/problem/C

#include<bits/stdc++.h>
#define ll long long int
#define mod 1000000007
#define mll map<ll,ll>
#define sll set<ll>
#define fo(i,n) for(i=0;i<n;i++)
using namespace std;

ll l,r,n,mid,ans,a,b;

bool solve(ll k, ll m){
	a=0;
	b=0;
	int flag=1;

	while(m>0){
	//	cout<<m<<endl;
		if(flag){
			if(m<k)
			{
				a+=m;
				m=0;

			}else{
				m=m-k;
				a+=k;
			}
			
			flag=0;
		}
		else{
			b+=m/10;
			m=m-(m/10);
			flag=1;
		}
	}
	//a+=m;
	//cout<<a<<" "<<b<<endl;
	if(a>=b)
		return true;
	else
		return false;
}

int main(){
	cin>>n;
	l=1;
	r=n+1;
	int k=0;
	while(k<70){

		mid=(l+r)/2;
		if(solve(mid,n)){
			ans = mid;
			//cout<<a<<" "<<b<<endl;
			//cout<<ans<<endl;
			r=mid;
		}else{
			l=mid+1;
		}
		k++;
	}
	cout<<ans<<endl;

	return 0;
}