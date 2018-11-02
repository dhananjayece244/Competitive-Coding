#include<bits/stdc++.h>
using namespace std;


int tsp(int curr, int mask){
	if(mask==(1<<n - 1)){
		return 0;
	}

	int res = INT_MAX;
	if(dp[curr][mask]!=-1){
		return dp[curr][mask];
	}
	for (int i = 0; i <=n; ++i)
	{
		if(!(mask & (1<<i))){
			res = min(res, tsp(i, mask | (1<<i)) + dist[curr][i]);
		}
	}
	return dp[curr][mask] = res;

}

int main(){
	int n;

	int res =INT_MAX, mask=0; 

	mask = mask | (1<<0);

	for (int i = 1; i <=n; ++i)
	{
		res = min(res, tsp(0, mask | (1<<i)) + dist[0][i]);
	}
	cout<<res<<endl;


}