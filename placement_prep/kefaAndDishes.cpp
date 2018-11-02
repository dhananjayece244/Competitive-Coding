#include<bits/stdc++.h>
using namespace std;


long long a[20];
long long rule[20][20];
long long dp[20][1<<20];
long long n,m;
int bit_count(long long mask){
	int ans =0;
	while(mask){
		if(mask & 1)
			ans++;
		mask = mask>>1;
	}
	return ans;
}

long long tsp(long long curr, long long mask){
	
	int no_of_ones = (bit_count(mask));
	if(no_of_ones==m){
		return 0;
	}
	long long res = 0;
	if(dp[curr][mask]!=-1){
		return dp[curr][mask];
	}
	for (int i = 0; i <n; ++i)
	{
		if(!(mask & (1<<i))){
			res = max(res, (tsp(i, mask | (1<<i)) +  a[i] + rule[curr+1][i+1]));
		}
	}
	// cout<<mask<<" "<<res<<endl;
	return dp[curr][mask] = res;


}

int main(){
	long long k,x,y,w;
	cin>>n>>m>>k;

	memset(dp, -1, sizeof dp);
	for (int i = 0; i <n; ++i)
	{
		cin>>a[i];
	}
	for (int i = 0; i < k; ++i)
	{
		cin>>x>>y>>w;
		rule[x][y] = w;	
	}

	long long res =0, mask=0; 

	mask = 0;
	
	for (int i = 0; i <n; ++i){

		res = max(res, (tsp(i, mask | (1<<i)) + a[i]));
		// cout<<"res "<<res<<endl;
	}
	
	cout<<res<<endl;
	return 0;
}