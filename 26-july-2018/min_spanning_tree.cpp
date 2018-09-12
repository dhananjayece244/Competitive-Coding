#include<bits/stdc++.h>
using namespace std;
#define ff first
#define ss second


int n,m,u,v,w,mst;

int find(int x, int parent[]){
    if(x!=parent[x])
        parent[x]=find(parent[x], parent);
    return parent[x];
}
void merge(int x, int y, int rank[], int parent[]){
    int px = find(x, parent);
    int py = find(y, parent);

    if(rank[px]>rank[py])
        parent[py] = px;
    else
        parent[px] = py;
    if(rank[px]==rank[py])
        rank[px]++;

}

int main(){
    cin>>n>>m;
    int parent[n+2];
    int rank[n+2];
    vector<pair<int, pair<int, int> > > edges;
    for(int i=0; i<m; i++){
        cin>>u>>v>>w;
        edges.push_back(make_pair(w, make_pair(u,v)));
    }
    sort(edges.begin(), edges.end());

    for(int i=0; i<n; i++){
          parent[i] = i;
          rank[i] = 0;
    }

    for(int i=0;i<m; i++){

        w = edges[i].ff;
        u = edges[i].ss.ff;
        v = edges[i].ss.ss;

        int set_u = find(u, parent);
        int set_v = find(v, parent);
        if(set_u != set_v){
            cout<<u<<" "<<v<<endl;
            merge(u, v, rank, parent);
            mst +=w;
        }
    }
    cout<<"total weight sum of mst= "<<mst<<endl;

    return 0;

}