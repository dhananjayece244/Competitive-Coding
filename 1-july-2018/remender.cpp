#include<bits/stdc++.h>
#define ll unsigned long long int
#define mod 1000000007
#define mll map<ll,ll>
#define sll set<ll>
#define fo(i,n) for(i=0;i<n;i++)
using namespace std;

int main(){
	cin>>n>>m;
	int remainder[m+1];
	memset(remainder, 0 , sizeof remainder);

	for (int i = 0; i < n; ++i)
	{
		cin>>a[i];
		remainder[a[i]%m]++;
	}
	int k= n/m;

	for (i = 0; i < m; ++i)
	{
		if(remainder[i] > k)
			break;
		else if(remainder < k){
			left=i;
		}
	}
	for (; j < count; ++j)
	{
		if(remainder[j]<0){
			
		}
	}

}