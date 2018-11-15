#include <bits/stdc++.h>
#define ff first
#define ss second
#define pb push_back
#define mp make_pair
#define pr pair
using namespace std;

bool cmp(pr<int,int>p1, pr<int, int>p2){
	return (p1.ss<p2.ss);
}
int temp, ans, f, s, x, y, z, n, k;
int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n>>k;
		ans =0;
		vector<pr<int, int>> v[k+1];
		for (int i = 0; i < n; ++i)
		{
			cin>>x>>y>>z;
			v[z].pb(mp(x,y));
		}
		for (int i = 1; i <=k; ++i)
		{
			// if(v[i].size()<1){
			// 	continue;
			// }
			sort(v[i].begin(), v[i].end(), cmp);
			temp = -1;
			for(auto e:v[i]){
				f = e.ff;
				s = e.ss;
				if(f>=temp){
					ans++;
					temp = f;
				}
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}