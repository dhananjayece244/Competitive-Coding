#include <bits/stdc++.h>
using namespace std;
int n;
long long h[5009];
long long baseh[5009];
// int dp[5002][5002];
/*
int recurse(int idx,int k) {
	if(idx == 1 and k == 1) {
		return abs(h[idx] - baseh[k]);
	}else if(idx == 1) {
		return min(abs(h[idx] - baseh[k]) , recurse(idx,k-1));
	}else if(k == 1) {
		return abs(h[idx] - baseh[k]) + recurse(idx - 1,k);
	}
	if(dp[idx][k] != -1) return dp[idx][k];

	int res = min( recurse(idx,k-1) , recurse(idx - 1,k) + abs(h[idx] - baseh[k]) );
	return dp[idx][k] = res;
}
*/
int main() {
	cin >> n;
	set<int> Set;
	for(int i = 1;i<=n;i++) {
		cin >> h[i];
		Set.insert(h[i]);
	}
	int distinct_h = (int)(Set.size());
	int idx = 1;
	for(int height:Set) {
		baseh[idx++] = height;
	}
	// memset(dp,-1,sizeof dp);
	// this will cause memory limit exceed
	// int ans = recurse( n , distinct_h );

	/*
		f(1,1)=|a1-b1|
		f(1,j)=min{|a1-bj|,f(1,j-1)},  j>1
		f(i,1)=|ai-b1|+f(i-1,1),  i>1
		f(i,j)=min{f(i,j-1),f(i-1,j)+|ai-bj|},  i>1, j>1
	*/
	long long f[5009];
	// idx = 1
	f[1] = abs(h[1] - baseh[1]);
	for(int k = 2;k <=n;k++) {
		f[k] = min( abs(h[1] - baseh[k]) , f[k-1] ); 
	}
	// idx > 1
	for(int idx = 2; idx<=n ; idx++) {
		for(int k = 1; k<=distinct_h ; k++) {
			// we can drop the idx parameter
			if(k == 1) {
				f[k] = abs(h[idx] - baseh[k]) + f[k];
			}else {
				f[k] = min(f[k - 1] , f[k] + abs(h[idx] - baseh[k]));
			}
		}
	}
	cout << f[distinct_h] << endl;
}


