#include<bits/stdc++.h>
using namespace std;
int a[100001],n1,s;
int dp[1000][1000];
string str;

void solve(int n, int s, string str){
	if(n==n1){
		cout<<s<<"--->";
		cout<<str<<endl;
		// for (int i = 0; i < n1; ++i)
		// {
		// 	cout<<a[i]<<" ";
		// }
		// cout<<endl;
		return ;
	}

	solve(n+1,s,str);
	solve(n+1,s+a[n],str+to_string(a[n])+" ");
}


int main(){
	cin>>n1;
	for (int i = 0; i < n1; ++i)
		cin>>a[i];

	solve(0,0,str);
	//memset(dp,-1, sizeof dp);
	//solve(n-1,s)?cout<<"Yes\n":cout<<"No\n";

	return 0;
}