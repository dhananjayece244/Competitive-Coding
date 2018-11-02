#include<bits/stdc++.h>
using namespace std;
int n,m,x,y;

int main(){
	cin>>n>>m;
	vector<int>v[n+2];
	map<int,int>deg;
	for (int i = 0; i < n; ++i)
	{
		cin>>x>>y;
		v[y].push_back(x);
		deg[x]++;
	}
	int ans=0;
	queue<int>q;
	for (int i=1;i<=n;i++)
	{	
		if(deg[i]==0){
			cout<<i<<endl;
			ans++;
			q.push(i);
		}
	}
	while(!q.empty()){
		int curr = q.front();
		q.pop();
		for(int next:v[curr]){
	
			deg[next]--;
			if(deg[next]==0){
				cout<<next<<endl;
				ans++;
				q.push(next);
			}
		}
		
		//v[next].erase(remove(v[next].begin(),v[next].end(),curr), v[next].end());
		
	}
	cout<<ans<<endl;
	return 0;

}