#include<bits/stdc++.h>
#define ll long long int
#define mod 1000000007
#define mll map<ll,ll>
#define sll set<ll>
#define fo(i,n) for(i=0;i<n;i++)
using namespace std;

string s;
int len,cnt,i;
int main(){
	cin>>s;
	len=s.length();
	for (i = 0; i < len; ++i)
	{
		if(s[len-1-i]=='0')
			cnt++;
		if(cnt==6)
			break;
	}
	for (i++; i < len; ++i)
	{
		if(s[len-1-i]=='1'){
			cout<<"yes\n";
			return 0;
	     }
	}
	cout<<"no\n";
	return 0;
}