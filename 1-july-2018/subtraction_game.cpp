#include <bits/stdc++.h>
using namespace std;

int _gcd(int a,int b){
    if(b>a) return _gcd(b,a);
    return b==0?a:_gcd(b,a%b);
}
int solve(int idx, int gcd){
	if(idx >=n)
		return 0;
	if(gcd==1)
		return 1;
	else
		return 0;
	if(dp[idx][gcd]!=-1)
		return dp[idx][gcd];
	return dp[idx][gcd]=solve(i+1,gcd) + solve(i+1,_gcd(a[i],gcd));
	
	
}

int main(){

	int n,t;
	cin>>t;
	while(t--){
		cin>>n;
		for (int i = 0; i < n; ++i)
			cin>>a[i];

		cout<<solve(0,a[0]);
		

	}

	

}