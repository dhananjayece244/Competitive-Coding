//geeksforgeeks/road-vs-library
#include<bits/stdc++.h>
#define ll unsigned long long int
#define mod 1000000007
#define mll map<ll,ll>
#define sll set<ll>
#define fo(i,n) for(i=0;i<n;i++)
using namespace std;

bool visited[100009];

ll n,m,cl,cr,q,ans,cnt,x,y,temp;

vector<int> vect[100009];

void solve(int v){

	for(auto e:vect[v]){
		if(!visited[e]){
			visited[e]=1;
			cnt++;
			solve(e);
		}
	}
}
int main(){
	cin>>q;
	while(q--){
		//cin>>n>>m>>cl>>cr;
		scanf("%lu%lu%lu%lu",&n,&m,&cl,&cr);
		for (int i = 0; i < m; ++i)
		{
			//cin>>x>>y;
			scanf("%lu%lu",&x,&y);
			vect[x].push_back(y);
			vect[y].push_back(x);
		}


		if(cl<=cr)
		{
			cout<<n*cl<<endl;
			for (int i = 0; i <=n; ++i)
			  	vect[i].clear();
	
			continue;
		}
		memset(visited,0,sizeof visited);
		//memset(vect,0,sizeof vect);
		ans=0;
		for (int i = 1; i <=n; ++i)
			{
				cnt=0;
				if(!visited[i]){
					solve(i);
					if(cnt==0)
						temp=cl;
					else
						temp=(cl+(cnt-1)*cr);
					//cout<<temp<<endl;
					ans +=temp;
					
			}
		}
		cout<<ans<<endl;

		for (int i = 0; i <=n; ++i)
			  	vect[i].clear();
	  
	
			
	}
	return 0;
}