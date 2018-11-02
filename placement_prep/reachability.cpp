#include <bits/stdc++.h>
using namespace std;
#define ff first
#define ss second

int n,m,x,y;
int dx[]={1,0,-1,0};
int dy[]={0,1,0,-1};
int xx,yy,t, next_y, next_x;

bool valid(int x, int y){
	if(x<0 || x>=n || y<0||y>=m)
		return false;
	else
		return true;
}
int solve(int i, int j, vector<vector<char>>table){

	queue<pair<pair<int,int>, int> >q;

	q.push(make_pair(make_pair(i,j), 0));

	while(!q.empty()){
		auto e = q.front();
		q.pop();
		xx = e.ff.ff;
		yy = e.ff.ss;
		t  = e.ss;

		for (int k = 0; k < 4; ++k)
		{
			next_x = xx + dx[k];
			next_y = yy + dy[k];

			if(valid(next_x, next_y)){
				if(table[next_x][next_y]!='*'){
					q.push(make_pair(make_pair(next_x, next_y), t+1));
				}
			}else{
				return t;
			}
 		}

	}
}

int main(){
	
	cin>>n>>m;
	vector<vector<char>>table(n, vector<char>(m));

	vector<vector<bool>>vist(n, vector<bool>(m,false));

	for (int i = 0; i < n; ++i){
		for (int j = 0; j < m; ++j)
		{
			cin>>table[i][j];
		}
		
	}

	cin>>x>>y;
	return 0;
	cout<<solve(x, y, table)<<endl;
	return 0;
}