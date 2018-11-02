#include <bits/stdc++.h>
using namespace std;
int n,k;

int a[109];
int b[109];

long dp[109][200009][2];
long inf = 1e9;

long recurse(int idx,int diff,int flag) {
	if(idx == n+1 and flag == 0 and diff==0) {
		return 0;
	}
	if(idx == n+1) {
		return -1*inf;
	}
	if(dp[idx][diff][flag] != -1) 
		return dp[idx][diff][flag];

	long take = 0,not_take= 0;
	int new_diff = a[idx] - b[idx];
	int new_flag=0;

	if(flag){
		new_diff = -diff + new_diff;
		if(new_diff<0){
			new_diff = -new_diff;
			new_flag = 1; 
		}
	}else{
		new_diff = diff + new_diff;
		if(new_diff<0){
			new_diff = -new_diff;
			new_flag = 1;
		}
	}
	take  = recurse(idx+1, new_diff, new_flag) + a[idx];  
	
	not_take = recurse(idx+1, diff, flag);
	
	dp[idx][diff][flag] = max(take,not_take);
	return dp[idx][diff][flag];
}
int main() {
	cin >> n >> k;
	for(int i = 1;i<=n;i++) {
		cin >> a[i];
	}
	for(int i = 1;i<=n;i++) {
		cin >> b[i];
		b[i] = b[i]*k;
	}
	memset(dp,-1,sizeof dp);
	long ans = recurse(1,0,0);
	if(ans<1)
		cout<<-1<<endl;
	else
		cout << ans << endl;

	return 0;
}