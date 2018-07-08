#include<bits/stdc++.h>
using namespace std;
#define maximum 100007


long long int temp, ans;
int n,m,start; 
int rooms[101][501];
long long int dp[101][501];


long long int solve(int i, int j, int last){
	

	if((j<0 || j==m) && i<n)
		return maximum;
	if(i==n-1)
		return rooms[i][j];

	if(dp[i][j]!=-1)
		return dp[i][j];
//	cout<<i<<" "<<j<<endl;


	long long int left=maximum,right=maximum,up=maximum; 

	if(last==0){
		left = solve(i,j-1,2);
		right= solve(i,j+1,1);
		up   = solve(i+1,j,0);
	}
	else if(last==1){
		right= solve(i,j+1,1);
		up   = solve(i+1,j,0);
	}
	else{
		left = solve(i,j-1,2);
		up   = solve(i+1,j,0);
	}

	long long int res= rooms[i][j] + min(left, min(right,up));
//	cout<<" ret "<<endl;

	return dp[i][j]=res;

}

int main(){
	cin>>n>>m;
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			cin>>rooms[i][j];
		}
	}
	memset(dp,-1,sizeof dp);

	ans= maximum;
	for (int j = 0; j < m; ++j)
	{
		temp = rooms[0][j] + solve(1,j,2);
		if(temp<ans)
		{
			ans =temp;
			start=j;
		}
		cout<<temp<<" start "<<j<<endl;
	}
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			cout<<dp[i][j]<<" ";
		}
		cout<<endl;
	}

	return 0;
}