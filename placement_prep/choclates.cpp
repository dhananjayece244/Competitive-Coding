#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,p,k;
	cin>>n>>p>>k;
	int a[n+1];
	for (int i = 0; i < n; ++i)
	{
		cin>>a[i];
	}
	sort(a,a+n); 
	int last = k*(p-1);

	last = last%n;

	for (int i = 0; i < k; ++i)
	{
		int idx = (last+i)%n+1;
		cout<<a[idx]<<" ";
	}
	cout<<endl;
	return 0;
}