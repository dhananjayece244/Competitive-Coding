#include <bits/stdc++.h>
using namespace std;



int FIND(int x,int * parent) {
	if( parent[x] != parent[parent[x]] ) parent[x] = FIND(parent[x],parent); return parent[x];
}
bool UNION(int x,int y,int * parent,int * rank) {
	int xx = FIND(x,parent); int yy = FIND(y,parent);
	if(xx == yy) return false;
	if(rank[xx] > rank[yy]) {int t=xx; xx = yy; yy = t;}
	if(rank[xx] == rank[yy]) rank[yy]++;
	parent[xx] = yy;
	return true;
}

int main()
{
	int parent[];
	int rank[];
	cin>>n;
	for (int i = 0; i < n; ++i)
	{
		cin>>x;
		parent[x]=x;
		rank[x]=1;
	}
	

}