#include<bits/stdc++.h>
using namespace std;

int n,m,x,y;
vector<int>v[10];
bool vist[10+2]={false};
bool fv[10+2]= {false};

int DFS(int s){
	vist[s] =  true;
	int res =1;
	for(auto e: v[s]){
		if(!vist[e]){
			vist[e]=true;
			res = res*DFS(e);
		}
		// if(vist[e]&&fv[e])
		// 	res = res*DFS(e);
		if(!fv[e])
			 res= -1;
	}
	fv[s] = true;
	if(res==-1){
		// v.push_back(s);
		cout<<s<<endl;
	}
	// cout<<s<<" "<<res<<endl;
	return res;

}

int main(){
	cin>>n>>m;
	for (int i = 0; i < m; ++i)
	{
		cin>>x>>y;
		v[x].push_back(y);
	}
	int ans =DFS(1);
	if(ans==1)
		cout<<"NO"<<endl;
	else
		cout<<"YES"<<endl;

	return 0;

}