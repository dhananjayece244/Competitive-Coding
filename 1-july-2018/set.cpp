#include<bits/stdc++.h>
#define ll unsigned long long int
#define mod 1000000007
#define mll map<ll,ll>
#define sll set<ll>
#define fo(i,n) for(i=0;i<n;i++)
 //#include <boost/math/common_factor.hpp>
 #include <algorithm>
using namespace std;
int n,x;
set<int>s;

int main(){

	cin>>n;
	for (int i = 0; i < n; ++i)
	{
		cin>>x;
		if(x!=0)
			s.insert(x);
		/* code */
	}
	cout<<s.size()<<endl;
	return 0;
}