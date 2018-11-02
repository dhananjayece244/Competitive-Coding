#include <bits/stdc++.h>
using namespace std;


typedef struct node{
	int data;
	struct node *next;
}node;

node *G[1001];
int visited[1001];
int q[10001], f =-1, r =-1;

void insert(int x, int y){
	node *p, *q;
	p = (node*)malloc(sizeof(node));
	q = (node*)malloc(sizeof(node));
	p->data = y;
	q->data = x;
	p->next = NULL;
	q->next = NULL;
	if(G[x]==NULL)
		G[x] = p;
	else{
		p->next = G[x]->next;
		G[x]->next = p;
	}
	if(G[y]==NULL)
		G[y] = q;
	else{
		q->next = G[y]->next;
		G[y]->next = q;
	}
}
void DFS(int s){
	node *p;
	cout<<s<<endl;
	p = G[s];
	visited[s]=1;
	while(p!=NULL){
		int i = p->data;
		if(!visited[i])
			DFS(i);

		p = p->next;
	}
}
void BFS(int s){
	f= 0, r = 1;
	q[f]=s;
	visited[s]=1;
	while(f!= r){
		int adj = q[f];
		f++;
		cout<<adj<<endl;
		node *p;
		p = G[adj];
		while(p!=NULL){
			if(!visited[p->data]){
				visited[p->data]=1;
				q[r++]= p->data;
			}
			p = p->next;
		}
	}
}
int main(){
	int n,m,v,u,x,y;

	cin>>n>>m;
	for (int i = 1; i <=n; ++i)
	{
		G[i] = NULL;
	}
	for (int i = 0; i < m; ++i)
	{
		cin>>x>>y;
		insert(x,y);
	}
	// DFS(1);
	BFS(1);
	return 0;
}