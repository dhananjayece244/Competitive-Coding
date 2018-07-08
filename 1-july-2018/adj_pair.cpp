#include<bits/stdc++.h>
#define ll unsigned long long int
#define mod 1000000007
#define mll map<ll,ll>
#define sll set<ll>
#define fo(i,n) for(i=0;i<n;i++)
using namespace std;

int n,i,j,k,temp;
int main(){
	cin>>n;
	int a[2*n+5],b[2*n+5];

	int ans=0;
	for (i = 0; i < 2*n; ++i)
	{
		cin>>a[i];
		b[i]=a[i];
	}
	for (i = 0; i < 2*n; i+=2)
	{

		for (j = i+1; j < 2*n ; ++j)
		{
			if(a[i]==a[j]){
				//cout<<" j"<<j<<endl;
				break;
			}
		}
		for (k = j; k>i; --k)
		{
			//swap(a[k],a[k-1]);
			temp=a[k];
			a[k]=a[k-1];
			a[k-1]=temp;
		}
		// for(int i = 0;i<2* n;i++) {
		// 	cout << a[i] <<" ";
		// }
		//cout << endl;
		ans+=(j-i-1);
		//cout<<ans<<endl;

	}


	//cout<<ans<<endl;

	int ans1=0;
	for (i = 2*n-1; i >=0; i-=2)
	{

		for (j = i-1; j >=0 ; --j)
		{
			if(b[i]==b[j]){
				//cout<<" j"<<j<<endl;
				break;
			}
		}
		for (k = j+1; k<i; ++k)
		{
			//swap(a[k],a[k-1]);
			temp=b[k-1];
			b[k-1]=b[k];
			b[k]=temp;
		}
		// cout<<endl;
		// for(int i = 0;i<2* n;i++) {
		// 	cout << b[i] <<" ";
		// }
		
		ans1+=(i-j-1);
		

	}
	//cout << endl;
	cout<<min(ans1,ans)<<endl;
	
	

	return 0;
	
}
