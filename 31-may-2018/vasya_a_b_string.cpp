#include<bits/stdc++.h>
using namespace std;
char s[100005];
int n,k,i,l,r,mid,ans,a,b;
int main()
{
	cin>>n>>k;

	cin>>s;
	l=0;
	r=n;
	ans=0;
	int p=30;
	while(p--){
		mid=(l+r)/2;
		a=b=0;
		for (i = 0; i < mid; ++i)
		{
			if(s[i]=='a')
				a++;
			else
				b++;
		}
		for (; i <= n; ++i)
		{
			//cout<<a<<" "<<b<<endl;
			if(min(a,b)<=k){
				ans=mid;
				break;
			}
			if(s[i]=='a')
				a++;
			else
				b++;
			if(s[i-mid]=='a')
				a--;
			else
				b--;

		}
		//cout<<"----------\n";
		if(ans<mid)
			r=mid;
		else
			l=mid+1;


	}
	cout<<ans<<endl;
	return 0;
}