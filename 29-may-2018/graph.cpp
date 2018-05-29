#include <bits/stdc++.h>
using namespace std;


void addEdge(std::vector<int> adj[], int u, int v)
{
	adj[u].push_back(v);
	//adj[v].push_back(u);
}
void printGraph(std::vector<int> adj[], int V)
{
	for(int v=0; v<V;v++)
	{
		cout << "\n Adjacency list of vertex " << v << "\n head";
		for(auto x: adj[v])
			cout << "-> " <<x;
		printf("\n");
	}
}
int main()
{
	int V=5;
	vector<int> adj[V];
	addEdge(adj, 0, 1);
	addEdge(adj, 0, 4);
	addEdge(adj, 1, 2);
	addEdge(adj, 1, 3);
	addEdge(adj, 2, 4);

	printGraph(adj, V);
	return 0;

}