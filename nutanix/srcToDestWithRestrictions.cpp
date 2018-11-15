/*
There are N points on a 2D- grid in the form (x,y). The distance between any two points x1,y1 and x2,y2 is=|x1-x2|+|y1-y2|. We have to traverse all the points starting from any one such that the total distance travelled by you is minimum. But, there are M restrictions, in the form u,v such that you cannot traverse v after covering u.
e.g.:

Input- 5  (N=Number of points)

                1,1 2,2 3,3 4,4 5,5    (xy coordinates of these points)

                2   (M=number of restrictions)

            1 2           (meaning you cannot traverse 2nd point(2,2)  after covering 1st(1,1))

            4 3                (meaning you cannot traverse 3rd point(3,3) after covering 4th(4,4))

              Output- 10

explanation--- >   traverse in the order-----   2,2---> 1,1----> 3,3------>4,4------>5,5
*/


#include <bits/stdc++.h>
using namespace std;

struct node
{
	int x;
	int y;
};
int dist[20][20];
int dp[20][1<<20];
map<int, int>mp;
int flag=0;
int sx, sy, dx, dy, n,xx,yy,tx,ty,t,m, ans;

int solve(int curr, int mask){
	if(mask == (1<<n)-1){
		flag=1;
		return 0;
	}
	if(dp[curr][mask]!=-1){
		return dp[curr][mask];
	}
	int res = INT_MAX;

	for (int i = 0; i < n; ++i)
	{
		if(!(mask & (1<<i))){
			if(!mp[i]){
				res = min(res, dist[curr][i] + solve(i, mask | (1<<i)));
			}else if(mask&(1<<mp[i])){
				res = min(res, dist[curr][i] + solve(i, mask | (1<<i)));
			}else{

			}
		}
	}
	
	return dp[curr][mask]=res;

}

int main(){
	int t;
	cin>>t;

	for (int tt = 0; tt < t; ++tt)
	{
		cin>>n>>m;
		struct node *p = new struct node[n+1];
		for (int i = 0; i < n; ++i)
		{
			cin>>xx>>yy;
			p[i].x = xx;
			p[i].y = yy;
		}
		for (int i = 0; i < m; ++i)
		{
			cin>>xx>>yy;
			mp[xx-1]=yy-1;
		}
		for (int i = 0; i < n; ++i)
		{
			for (int j = 0; j < n; ++j)
			{	

				tx = p[i].x - p[j].x;
				ty = p[i].y - p[j].y;
				if(tx<0)
					tx = -tx;
				if(ty<0)
					ty = -ty;
				dist[i][j] = tx + ty;
			}
		}	
		int temp, ans = INT_MAX;
		for (int i = 0; i < n; ++i)
		{
			flag=0;
			memset(dp, -1, sizeof dp);
			int mask = 1<<i;
			if((!mp[i]))
				temp = solve(i,mask);
			if(flag){
				ans = min(ans, temp);
				// cout<<i<<" -----------"<<ans<<endl;
			}
			
		}
		
		cout<<ans<<endl;
	}
	return 0;
}
