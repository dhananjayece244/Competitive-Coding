#include <bits/stdc++.h>
using namespace std;

int h[101],b[101];
int k1,k,n,x;
string s[101];


bool cmp(const string &a, const string &b){
	return (a.size()<b.size());
}

int main()
{
	cin>>n;
	for (int i = 0; i < n; ++i)
	{
		cin>>s[i];
	}
	if(n==1)
	{
		cout<<"YES\n";
		cout<<s[0]<<endl;
		return 0;
	}
	sort(s,s+n,cmp);
	int flag=0;
	for (int i = 1; i < n; ++i)
	{
		if(s[i].find(s[i-1])==std::string::npos)
		{
			flag=1;
			break;
		}
		
	}
	if(!flag)
	{
		cout<<"YES\n";
		for (int i = 0; i < n; ++i)
		{
			cout<<s[i]<<endl;
		}
	}
	else
		cout<<"NO\n";

	return 0;

}
