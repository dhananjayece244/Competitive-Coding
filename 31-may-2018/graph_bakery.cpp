#include<bits/stdc++.h>
using namespace std;


vector<pair<int,int>> adj[100005];

int n,m,k,ans,u,v,w,x;

int main()
{
	cin>>n>>m>>k;
	//adj.resize(m);

	for (int i = 0; i < m; ++i)
	{
		cin>>u>>v>>w;
		adj[v].push_back(make_pair(u,w));
		adj[u].push_back(make_pair(v,w));		
	}
	vector<int> storage(n+1,0);
	vector<int> st(k);

	for (int i = 0; i < k; ++i)
	{
		cin>>x;
		st[i]=x;
		storage[x] +=1;
	}
	ans=INT_MAX;
	int flag=0;
	for(int i=0;i<k;i++)
	{
		int s=st[i];
		//cout<<s<<" ";
		for(auto e:adj[s])
		{
			//cout<<e.first<<endl;
			if(!storage[e.first])
			{
				ans = min(ans,e.second);
				flag=1;
			}
		}
	}
	if(flag)
		cout<<ans<<endl;
	else
		cout<<-1<<endl;
}