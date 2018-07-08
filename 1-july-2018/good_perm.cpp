#include<bits/stdc++.h>
#define ll long long int
#define mod 1000000007
#define mll map<ll,ll>
#define sll set<ll>
#define fo(i,n) for(i=0;i<n;i++)

using namespace std;

int b[10];
int t,n,k;
int a[10];

int solve(int a[]){

	
}

int main(){
	cin>>t;
	while(t--){
		cin>>n>>k;
		memset(b,0,sizeof b);

		for (int i = 0; i < n; ++i)
		{
			cin>>a[i];
			b[a[i]]=1;
			/* code */
		}

		cout<<solve(b)<<endl;


	}

	return 0;
}