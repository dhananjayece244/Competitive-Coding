#include <bits/stdc++.h>
using namespace std;

std::vector<int> v[100001];
pair <int, int> edge[100001];
int color[100001];
int n,m,x,y;
bool DFSUtil(int r, int c, bool visited[])
{
	visited[r] = true;
	bool ans = true;
	for(int e:v[r])
	{
		if(!visited[e])
		{
			if(color[e]!=c) {
				ans = false;
				break;
			}else {
				ans =  ans && DFSUtil(e,c, visited);
			}
		}
	}
	return ans;
}


bool DFS(int r)
{
	bool visited[100001];
	memset(visited,false,sizeof visited);
	visited[r]=true;
	bool ans = true;
	for(int e:v[r])
	{
		if(!visited[e])
		{
			visited[e]=true;
			ans = ans && DFSUtil(e,color[e], visited);
		}
	}
	return ans;
}
int main()
{
	int i;
	cin>>n;
	for (i = 0; i < n-1; ++i)
	{
		cin>>x>>y;
		v[x].push_back(y);
		v[y].push_back(x);
		edge[i].first=x;
		edge[i].second=y;
		/* code */
	}
	for (i = 1; i <= n; ++i)
	{
		cin>>color[i];
		/* code */
	}
	for (i = 0; i < n-1; ++i)
	{
		if(color[edge[i].first]!=color[edge[i].second])
			break;
	}
	if(i==n-1)
		cout<<"YES\n"<<1<<endl;
	else{
		if(DFS(edge[i].first))
			cout<<"YES\n"<<edge[i].first<<endl;
		else if(DFS(edge[i].second))
			cout<<"YES\n"<<edge[i].second<<endl;
		else
			cout<<"NO\n";
	}

	return 0;

}