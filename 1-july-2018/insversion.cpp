#include<bits/stdc++.h>
using namespace std;

int n,x,ans,temp,t;
int main()
{
	cin>>t;
	while(t--){
		cin>>n;
		int a[n+1];
		set<int>s;
		for (int i = 0; i < n; ++i)
		{
			cin>>a[i];
		}
		s.insert(a[n-1]);
		ans=0;
		for (int i = n-2; i >=0; --i)
		{
			temp=distance(s.begin(),s.lower_bound(a[i]));
			//cout<<temp<<endl;
			ans+=temp;
			s.insert(a[i]);
		}
		cout<<ans<<endl;
		//s.clear();

	}
	
	return 0;
}