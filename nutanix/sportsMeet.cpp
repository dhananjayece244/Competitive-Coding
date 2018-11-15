#include<bits/stdc++.h>
using namespace std;
#define ff first
#define ss second

int t,n,m,ans,i;
double prv, curr;
int main(){

	cin>>t;
	while(t--){
		cin>>n;
		cin>>m;
		int dist[n+1];
		int vel[n+1];
		double time[n+1];
		vector<pair<int, int>>vect;
		for (i = 0; i < n; ++i)
		{
			cin>>dist[i];
			vect.push_back(make_pair(m-dist[i], i));
		}
		for (i = 0; i < n; ++i)
		{
			cin>>vel[i];
			time[i] =(1.0*(m-dist[i])/(1.0*vel[i])); 
		}
		sort(vect.begin(), vect.end());
	
		prv =   time[vect[0].ss];
		ans = 1;
		for (i = 1; i <n; ++i)
		{
			// cout<<vect[i].ss<<" "<<vect[i].ff<<" "<<ans<<endl;
			curr =  time[vect[i].ss];
			if(curr>prv){
				ans++;
				prv = curr;
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}