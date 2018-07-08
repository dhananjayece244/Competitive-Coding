#include<bits/stdc++.h>
#define ll unsigned long long int
#define mod 1000000007
#define mll map<ll,ll>
#define sll set<ll>
#define fo(i,n) for(i=0;i<n;i++)
 //#include <boost/math/common_factor.hpp>
 #include <algorithm>
using namespace std;

ll n,k;
ll power(ll x, ll y)
{
    ll temp;
    if( y == 0)
        return 1;
    temp = power(x, y/2);
    if (y%2 == 0)
        return (temp*temp)%mod;
    else
        return (x*temp*temp)%mod;
}

float power1(float x, ll y)
{
    float temp;
    if( y == 0)
       return 1;
    temp = power(x, y/2);       
    if (y%2 == 0)
        return temp*temp;
    else
    {
        if(y > 0)
            return x*temp*temp;
        else
            return (temp*temp)/x;
    }
}  

int main(){

	cin>>n>>k;

	ll s1 = n + 2*n*power(2,k-1);
	ll s3 = n+ 0.5*power(0.5,k-1);
	cout<<(2*s1 - s3+mod)%mod <<endl;

	return 0;

}