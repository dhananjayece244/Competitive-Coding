//http://codeforces.com/contest/1000/problem/C

#include<bits/stdc++.h>
#define ll long long int
#define mod 1000000007
#define mll map<ll,ll>
#define sll set<ll>
#define fo(i,n) for(i=0;i<n;i++)
using namespace std;

vector<pair<ll,int>>points;

bool cmp(const pair<ll, int> &a, const pair<ll, int> &b){
	if(a.first < b.first)
		return true;
	if(a.first > b.first)
		return false;
	if(a.second < b.second)
		return true;
	else
		return false;
}
ll n,x,y;
ll ans[200005];
int main(){
	cin>>n;

	for (int i = 0; i <n; ++i)
	{
		cin>>x>>y;
		points.push_back(make_pair(x,0));
		points.push_back(make_pair(y,1));
	}
	sort(points.begin(),points.end(),cmp);
	// for (int i = 0; i <2*n; ++i)
	// {
	// 	cout<<points[i].first<<" "<<points[i].second<<endl;
		
	// }

	ll top=0,last=0,cnt,prev;
	
	for (int i = 0; i < 2*n; ++i)
	{
		

		ans[top]+=(points[i].first-last);
		last=points[i].first+1;
		cnt=top;
		prev=points[i].first;


		while(points[i].first==prev){
			if(points[i].second){
				top--;			
				}
			else{
				top++;
				cnt++;
			}
			i++;
		}
		i--;
		ans[cnt]+=1;		
	}

	for (int i =1; i <=n; ++i)
	{
		cout<<ans[i]<<endl;
	}



	return 0;
}