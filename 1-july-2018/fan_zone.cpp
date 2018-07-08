#include<bits/stdc++.h>
#define ll long long int
#define mod 1000000007
#define mll map<ll,ll>
#define sll set<ll>
#define fo(i,n) for(i=0;i<n;i++)
using namespace std;

int n;
int main(){
	cin>>n;
	int a[n+1];
	ll temp=1000000000000,temp1;
	int idx,ans=-1;
	int f=1;
	for (int i = 0; i < n; ++i)
	{
		cin>>a[i];

		temp1=(a[i]*1LL + i*1LL);

		//a[i]-=(i);
		//cout<<a[i]<<" "<<i<<endl;
		if(a[i]<=i && f){
			ans=i+1;
			f=0;
		}
		
		if(temp>temp1){
			temp=temp1;
			idx=i;
		}
		
	}
	if(ans!=-1)
	{
		cout<<ans<<endl;
		return 0;
	}
	else{
		cout<<idx+1<<endl;
	}

	return 0;
	
}