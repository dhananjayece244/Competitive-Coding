#include<bits/stdc++.h>
using namespace std;
int X, A, B;
long long dp[100005];
bool visited[100005];
long long solve(int idx){
	if(idx<0 || idx>X)
		return 1e9;
	if(idx==X)
		return 0;
	if(dp[idx]!=-1)
		return dp[idx];
	if(visited[idx])
		return 1e9;
	visited[idx]= true;
	long long res;

	res = A + solve(idx+1);
	res = min(res, A + solve(idx-1));
	res = min(res, B + solve(2*idx)); 

	return dp[idx]=res; 
}
long long solve(int idx){
	if(idx<0 || idx>X)
		return 1e9;
	queue<pair<int, int>>q;
	
	long long res;

	res = A + solve(idx+1);
	res = min(res, A + solve(idx-1));
	res = min(res, B + solve(2*idx)); 

	return dp[idx]=res; 
}


int main(){
	cin>>X>>A>>B;
	memset(dp, -1, sizeof dp);
	cout<<solve(0)<<endl;
	return 0;
}
