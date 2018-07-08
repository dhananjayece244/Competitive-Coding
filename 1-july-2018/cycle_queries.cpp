#include<bits/stdc++.h>
#define ll unsigned long long int
#define mod 1000000007
#define mll map<ll,ll>
#define sll set<ll>
#define fo(i,n) for(i=0;i<n;i++)
using namespace std;

//bool visited[100009];

//ll n,m,cl,cr,q,ans,cnt,x,y,temp;
ll ans=1000000000005;
int n, m, x,k;

typedef pair<int,int> Pair;
vector<Pair> vertex[10005];

void path(int source){

	priority_queue<Pair, vector <Pair>, greater<Pair>> pq;

	vector<ll>dist(n+1,1000000000005);

	pq.push(make_pair(0,source));

	dist[source]=0;

	while(!pq.empty()){
		int u = pq.top().second;
		pq.pop();
		list<Pair>:: iterator i;

		for (auto i:vertex[u])
		{
			int v = i.first;
			int cost=i.second;

			ll temp = (dist[u]*1LL+cost*1LL);
			if(v==n){
					ans = min(ans,temp);
				}

			if((temp/k)%2){

				ll tt= temp/k;
				temp = tt*k*1LL + k*1LL;
			}
			
			if(dist[v]>temp){
				dist[v] = temp;
				pq.push(make_pair(dist[v],v));
			}
		}
	}

}

int main() {
   
    cin >> n;
   	
    for (int i = 1; i <= m; i += 1) {
        cin>>a[i];
        vertex[1].push_back({b, c});
    }

    path(1);
    cout<<ans<<endl;
    return 0;
}