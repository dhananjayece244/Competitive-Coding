#include<bits/stdc++.h>
#define ff first
#define ss second
#define mp make_pair
#define pb push_back
#define ll long long int
int mn=100000;
using namespace std;
int cost[100000][3];
int dp[10000][3];
int n;
ll a[100010];
ll f[100010];
ll b[100010];
map<int,map<int,int> > my;
int favor[100010];
int opposite[100010];
int parent[100010];
int along[100010];
int against[100010];
vector<int> v[100000];
int answer[100010];
void dfs(int node,int par)
{
    parent[node]=par;
    for(int i=0;i<v[node].size();i++)
    {
        int cur=v[node][i];
        if(cur!=par)
        {
        along[cur]=along[node];
        opposite[cur]=opposite[node];
        if(my[node][cur])
            along[cur]+=1;
        if(my[cur][node])               
            opposite[cur]+=1;
        dfs(cur,node);
        if(my[node][cur])
            favor[node]+=1;
        favor[node]+=favor[cur];
        }
    }
}
int main()
{
      int q;
     //freopen("inp.txt","r",stdin);
      cin>>q;
      while(q--)
      {
             int n;
             cin>>n;
             my.clear();
             for(int i=1;i<=n;i++)
             {
                 favor[i]=0;
                 along[i]=0;
                 opposite[i]=0;
             }
             for(int i=1;i<=n;i++)
             {
                  v[i].clear();
             }
             for(int i=0;i<n-1;i++)
             {
                    int x,y;
                    cin>>x>>y;
                    v[x].pb(y);
                    v[y].pb(x);
             }
             int g,k;
             cin>>g>>k;
             for(int i=0;i<g;i++)
             {
                 int x,y;
                 cin>>x>>y;
                  my[x][y]++;        
             }
             
             dfs(1,0);
             int ret=0;
             for(int i=1;i<=n;i++)
             {
                 int possible = favor[1] - along[i] + opposite[i];
                 if(possible>=k)
                     ret++;
             }
             if(ret==0)
                 cout<<"0/1"<<endl;
             else
             {   
             int x=__gcd(n,ret);
             ret=ret/x;
             n=n/x;
             cout<<ret<<"/"<<n<<endl;
           }
}
return 0;
}