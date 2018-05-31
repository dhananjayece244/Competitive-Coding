#include<bits/stdc++.h>

using namespace std;

struct seg{
	int l,r,idx;
}s[300005];

int n,ll,rr;

bool cmp(seg a, seg b)
{
	if (a.l < b.l) return true;
	else if (a.l > b.l) return false;
	return a.r > b.r;
}
int main()
{
	cin>>n;
	for (int i = 0; i < n; ++i)
	{
		cin>>ll>>rr;
		s[i].l=ll;
		s[i].r=rr;
		s[i].idx=i+1;
	}
	sort(s,s+n,cmp);
	// for (int i = 0; i < n; ++i)
	// {
	// cout<<s[i].idx<<" "<<s[i].l<<" "<<s[i].r<<endl;
	// }
	int res=-1,outer=0;
	for (int i = 0; i < n; ++i)
	{
		
		if(res>=s[i].r)
		{
			cout<<s[i].idx<<" "<<outer<<endl;
			return 0;

		}
		else
			{
				res=s[i].r;
				outer=s[i].idx;
			}
	}
	cout<<-1<<" "<<-1<<endl;
	return 0;
}