#include<bits/stdc++.h>
#define ll long long int
#define mod 1000000007
#define mll map<ll,ll>
#define sll set<ll>
#define fo(i,n) for(i=0;i<n;i++)
using namespace std;

bool c[3][10];
int len,cnt,i,n,x;
int main(){
	cin>>n;
	//memset()
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < 6; ++j)
		{
			cin>>x;
			c[i][x]=1;		
		}
		
	}
	cnt=0;
	for (int i = 1; i <=9; ++i)
	{
		
		if(c[0][i]||c[1][i]||c[2][i]){
			cnt++;
		}
		else
			break;
	}
	if(cnt<9){
		cout<<cnt<<endl;
		return 0;
	}

	for (int i = 1; i <=9; ++i)
	{
		for (int j = 0; j <=9; ++j)
		{
			// cout<<c[0][i] << c[1][j]<< c[0][i]<<c[2][j]<<endl;
			// cout<<c[1][i] << c[0][j]<< c[1][i]<<c[2][j]<<endl;
			// cout<<c[2][i] << c[0][j]<< c[2][i]<<c[1][j]<<endl;

			if((c[0][i] && c[1][j]) || (c[0][i] && c[2][j]) || 
			   (c[1][i] && c[0][j]) || (c[1][i] && c[2][j]) ||
			   (c[2][i] && c[0][j]) || (c[2][i] && c[1][j]))
				   cnt++;
			else{
				cout<<cnt<<endl;
				return 0;
			} 
			//cout<<cnt<<endl;
		}
		
	}
	cout<<0<<endl;


	return 0;
}