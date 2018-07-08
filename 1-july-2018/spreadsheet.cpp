#include <bits/stdc++.h>
using namespace std;

int n,m,k,t,x,y;
int main(){

	cin>>n>>m;

	int a[n][m];
	int b[n];
	for (int i = 0; i < n; ++i)
	{
		b[i]=1;
		for (int j = 0; j < m; ++j)
		{
			cin>>a[i][j];
		}
	}
	
	for (int j = 0; j < m; ++j)
	{
		k=n-1;
		for (int i = n-2; i >=0; --i)
		{
			if(a[i][j]<=a[i+1][j])
				b[i]=max(b[i],k-i+1);
			else
				k=i;
		}
	}
	// for (int i = 0; i < n; ++i)
	// {
	// 	cout<<b[i]<<endl;
	// }
	cin>>t;
	while(t--){
		cin>>x>>y;
		if(y-x+1<=b[x-1])
			cout<<"Yes\n";
		else
			cout<<"No\n";
	}
	return 0;
}