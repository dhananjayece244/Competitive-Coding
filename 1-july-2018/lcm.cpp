#include<bits/stdc++.h>
#define ll unsigned long long int
#define mod 1000000007
#define mll map<ll,ll>
#define sll set<ll>
#define fo(i,n) for(i=0;i<n;i++)
 //#include <boost/math/common_factor.hpp>
 #include <algorithm>
using namespace std;

ll lcmm(ll i, ll j){
	ll hcf = i;
    ll temp = j;
    
    while(hcf != temp)
    {
        if(hcf > temp)
            hcf -= temp;
        else
            temp -= hcf;
    }

   ll lcm = (i * j) / hcf;
    return lcm;
}


ll l,r,x,y,lmt,ans,cnt,j,k;

int main(){

	cin>>l>>r>>x>>y;

	k = x*y;

	lmt = sqrt(k);

	if(r<lmt)
		cout<<0<<endl;
	else{
		for (ll i = max(l,x); i <=min(lmt,min(r,y)); ++i)
		{
			if(k%i==0){
				j = k/i;
				ll gc =__gcd(i,j);
				ll lc = k/gc;
				//cout<<i<<" "<<j<<" "<<gc<<" "<<lc<<endl;
				if(gc==x && lc==y) 
					cnt++;
			}
		}
		ans = 2*cnt;
		if(lmt==x && lmt==y)
			ans--;
			
		cout<<ans<<endl;
	}
	return 0;
	

}