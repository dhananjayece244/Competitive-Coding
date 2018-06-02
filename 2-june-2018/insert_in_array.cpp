#include<bits/stdc++.h>
using namespace std;

int n,x;
int main()
{
	set<int>s;
	for (int i = 1; i < 200005; ++i)
	{
		s.insert(i);
	}
	cin>>n;
	for (int i = 0; i < n; ++i)
	{
		cin>>x;
		auto idx=s.lower_bound(x);
		cout<<*idx<<endl;
		s.erase(*idx);
	}

	return 0;
}