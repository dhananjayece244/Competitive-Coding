#include<bits/stdc++.h>
using namespace std;

string s[101];
int dp[101][101][101];

int g1,g2,g3,g4,gn,n,m;

// int gain(int x1, int y1, int x2, int y2) {
// 	return (x1==x2 && y1==y2)? s[x1][y1] =="*":s[x1][y1] =="*" + s[x2][y2] =="*";
// }

int solve(int x1, int y1, int x2){

	int y2 = x1+y1-x2;

	if(x1>=n || x2>=n || y1>=m || y2>=m)
		return 0;


	if(s[x1][y1] =='#' ||s[x2][y2]=='#')
		return 0;

	if(dp[x1][y1][x2]!=-1)
		return dp[x1][y1][x2];

	gn = (x1==x2 && y1==y2)? s[x1][y1] =='*':s[x1][y1] =='*' + s[x2][y2] =='*';

	g1=gn + solve(x1+1,y1,x2+1);  // both down
	g2=gn + solve(x1,y1+1,x2);    // both right

	g3=gn + solve(x1+1,y1,x2);   // firt down && second right
	g4=gn + solve(x1,y1+1,x2+1); // first right && secong down

	dp[x1][y1][x2]= max(g1, max(g2, max(g3,g4)));

	return dp[x1][y1][x2];


}

int main()
{
	cin>>n>>m;
	memset(dp,-1,sizeof dp);

	for (int i = 0; i < n; ++i)
	{
		cin>>s[i];

	}
	cout<<solve(0,0,0)<<endl;
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			cout<<dp[0][i][j]<<" ";
		}
		cout<<endl;
	}

}