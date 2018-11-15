#include <bits/stdc++.h>
using namespace std;

struct node
{
	int x;
	int y;
};
int dist[20][20];
int dp[20][1<<20];

int sx, sy, dx, dy, n,xx,yy,tx,ty,t,n1;

int solve(int curr, int mask){
	if(mask == (1<<(n+2))-1){
		return dist[curr][1];
	}
	if(dp[curr][mask]!=-1){
		return dp[curr][mask];
	}
	int res = INT_MAX;

	for (int i = 0; i < n+2; ++i)
	{
		if(!(mask & (1<<i))){
			res = min(res, dist[curr][i] + solve(i, mask | (1<<i)));
		}
	}
	
	return dp[curr][mask]=res;

}

int main(){
	int t;
	cin>>t;

	for (int tt = 0; tt < t; ++tt)
	{
		cin>>n;
		n1 = n+2;
		struct node *p = new struct node[n+3];
		memset(dp, -1, sizeof dp);
		for (int i = 0; i < n+2; ++i)
		{
			cin>>xx>>yy;
			p[i].x = xx;
			p[i].y = yy;
		}
		for (int i = 0; i < n+2; ++i)
		{
			for (int j = 0; j < n+2; ++j)
			{	

				tx = p[i].x - p[j].x;
				ty = p[i].y - p[j].y;
				if(tx<0)
					tx = -tx;
				if(ty<0)
					ty = -ty;
				dist[i][j] = tx + ty;
				if(i==0 && j==11){
				}

			}
		}		
		int mask = 1<<0;
		mask = mask | (1<<1);

		int ans = solve(0,mask);
		cout<<"#"<<tt+1<<" "<<ans<<endl;
	}
	return 0;
}
