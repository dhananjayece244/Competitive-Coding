#include <bits/stdc++.h>
using namespace std;

std::vector<int> v[100001];

int n,m,x,y,last_visited;

void DFSUtil(int r, bool visited[])
{
	visited[r] = true;
	for(int e:v[r])
	{
		if(!visited[e])
		{
			DFSUtil(e, visited);
			
		}
	}
}


bool bipartite()
{
	bool visited[100001];
	int color[100001];
	memset(visited,false,sizeof visited);
	memset(color,-1,sizeof color);
	
	int i;
	for (int i = 0; i < n; i++)
    {
        if (visited[i] == false)
        {
            DFSUtil(i, visited);
            last_visited = i;
        }
    }
    
	for (i = 0; i < n; ++i)
	{
		if(!visited[i])
			break;
		/* code */
	}
	if(i==n)
		cout<<last_visited<<endl;
	else
		cout<<"No Mother vertex exists\n";
	
}
int main()
{
	int i;
	cin>>n>>m;
	for (i = 0; i < m; ++i)
	{
		cin>>x>>y;
		v[x].push_back(y);
		//v[y].push_back(x);
		
		/* code */
	}

	bipartite();

	return 0;

}