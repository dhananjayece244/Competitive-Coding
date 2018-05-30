#include <bits/stdc++.h>

using namespace std;

unsigned long long int md =1000000007;
// long long int fact1(int long long n)
// {
//     long long int  result = 1;
//     while(n)
//         {
//         	result = (result * n) % md;
//         	n--;
//         }

//     return result;
// }

int main()
{
	unsigned long long int m,n,T,ans,aa,bb,i,j;
	int t;
	cin>>t;
	while(t--)
	{
		cin>>n>>T;
		aa = 1;
		bool flag = false;
		if((n+1)%(T+1)==0)
		{
			flag=true;
			aa=(n+1)/(T+1);
		}
		else
			aa=(n+1)%md;

		for (i = n+2,j=1,bb=1; i <= n+T+1; ++i,j++){
		
		//while(i++<(n+T+1)){
			if(!flag && i%(T+1)==0){
				aa = (aa * (i/(T+1)))%md;
				flag = true;
			}
			else
				aa = (aa*i)%md;	

			bb =(bb*j)%md;
		}
		ans = (aa + md -bb)%md;
		cout<<ans<<endl;
	}
	return 0;
}