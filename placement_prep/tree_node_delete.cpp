#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,x,y;
	cin>>n;
	int d[n+2]={0};
	vector<int>v[n+2];
	// vector<pair<int,int>>d[n+1];
	for (int i = 0; i < n; ++i){
		cin>>x>>y;
		v[x].push_back(y);
		v[y].push_back(x);

		d[x]++;
		d[y]++;
	}
	
	int time[n+2]={0};
	
	queue<int>q;
	for (int i = 0; i <=n+2; ++i)
	{
		if(d[i]==1)
			q.push(i);

	}
	int ans=0;
	while(!q.empty()){
		int curr = q.front();
		q.pop();
		int next = v[curr][0];

		v[next].erase(remove(v[next].begin(),v[next].end(),curr), v[next].end());
		// v[curr].erase(remove(v[curr].begin(),v[curr].end(),next), v[curr].end());
		
		time[next] = time[curr]+1;

		// cout<<curr<<" "<<next<<" "<<time[next]<<endl;
		ans = max(ans,time[curr]);
		d[next]--;
		if(d[next]==1)
			q.push(next);
	}
	cout<<ans+1<<endl;
	return 0;
}
