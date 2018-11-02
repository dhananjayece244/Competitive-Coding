#include <bits/stdc++.h>
using namespace std;

#define M 1000000007

int f[100001];

void fct(int n){
	f[0]=1, f[1]=1;

	for (int i =2; i <=n; ++i)
	{
		f[i] = (i*f[i-1])%M; 
	}
}

int solve(int root,vector<int>v[], bool visited[]){
	int res = 1;
	int len = v[root].size();
	int ct=0;
	visited[root]=true;
	for(auto e: v[root]){
		if(!visited[e]){
			ct++;
			res = (res*solve(e,v,visited))%M;
		}
	}

	return (res*f[ct])%M;
}

int main(){
	int n,m,x,y;
	cin>>n>>m;
	vector<int>v[n+2];
	bool visited[n+1];
	memset(visited, false, sizeof visited);
	fct(m+1);

	for (int i = 0; i < m; ++i)
	{
		cin>>x>>y;
		v[x].push_back(y);
		v[y].push_back(x);
	}

	cout<<solve(1,v, visited)<<endl;
	return 0;

}